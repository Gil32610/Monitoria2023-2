#include <stdio.h>

int getFirst(int *matringMatrix, int columns);
int getLast(int *matringMatrix, int columns);

int main()
{
    int row = 4;
    int column = 5;
    int matring[4][5] = {{4, 1, 8, 0, 5},
                         {9, 9, 9, 3, 4},
                         {3, 9, 1, 2, 7},
                         {
                             2,
                             3,
                             6,
                             5,
                             9,
                         }};
    int first = getFirst((int *)matring, 5);
    printf("%d", first);
    return 0;
}

int getFirst(int *matringMatrix, int columns)
{
    int first = 0, decimal = 1000;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            first += *((matringMatrix + j * 5) + i) * decimal;
            decimal /= 10;
        }
    }
    return first;
}

int getLast(int *matringMatrix, int columns)
{
    int last = 0, decimal = 1000;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            last += *((matringMatrix + 4 + (j * 5)) + i) * decimal;
            decimal /= 10;
            if (decimal <= 0)
                break;
        }
    }
    return last;
}
