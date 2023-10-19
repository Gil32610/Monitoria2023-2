#include <stdbool.h>
#include <stdio.h>
void printValues(int *matrix, int size, int row);
void playPosition(int *matrix, int rowPos, int colPos, int xOrCircle);
bool isGameOver(int *matrix);

int main()
{
    int matrix[3][3] = {{-1, -1, -1}, {-1, -1, -1}, {-1, -1, -1}};
    printf("TicTacToe game!\n");
    printValues((int *)matrix, 3, 3);
    do
    {

    } while (isGameOver(matrix));
    return 0;
}

void printValues(int *matrix, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            int currentPosition = (i * column) + j;
            char circleOrX;
            if (matrix[currentPosition] >= 0)

                circleOrX = matrix[currentPosition] == 1 ? 'X' : 'O';
            else
                circleOrX = ' ';
            if (j != column - 1)
            {
                printf(" %c |", circleOrX);
                continue;
            }
            printf(" %c", circleOrX);
        }
        printf("\n");
    }
}

void playPosition(int *matrix, int rowPos, int colPos, int xOrCircle)
{
    *((matrix + (rowPos * 3)) + colPos) = xOrCircle;
}


