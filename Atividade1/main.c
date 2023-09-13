#include <stdio.h>

int main()
{
    int repetidos[] = {10, 20, 40, 10, 10, 10, 50};
    int size = sizeof(repetidos) / 4;
    int *p = findPositions(repetidos, size, 10);
    repeatedPositions(p, size);

    return 0;
}

void repeatedPositions(int *p, int size)
{
    printf("Valor encontrado na posicao: ");
    for (int i = 0; i < size; i++)
    {
        if (*(p + i) == 1)
            printf("%d%s", i != size - 1 ? *(p + i) + ", " : ".\n");
    }
}

int *findPositions(int values[], int size, int key)
{
    int sequence[size];
    int index;
    for (int i = 0; i < size; i++)
    {
        if (values[i] == key)
        {
            sequence[index++] = 1;
        }

        return sequence;
    }
}