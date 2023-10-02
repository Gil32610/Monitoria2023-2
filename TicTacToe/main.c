#include <stdio.h>
void printValues(int **matrix, int size, int row);
int main()
{
    int matrix[1][2] = {{1,2,3},{4,5,6}};
    printValues(matrix,1,0);
    return 0;
}

void printValues(int **matrix, int size, int row)
{
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            printf("%d |", matrix[row][i]);
            continue;
        }
        printf("%d", matrix[row][i]);
    }
}