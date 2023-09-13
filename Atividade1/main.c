#include <stdio.h>
void repeatedPositions(int *p, int size);
int *findPositions(int values[], int size, int key);
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
    printf("Tamanho do vetor: %d\n", size);
    printf("Valor encontrado na posicao: ");
    for (int i = 0; i < size; i++)
    {
        if (*(p + i) == 1)
        {
            printf("%d%s", i, i != size - 1 ? ", " : ".\n");
        }
    }
}

int *findPositions(int values[], int size, int key)
{

    int *p = malloc(sizeof(values));
    for (int i = 0; i < size; i++)
    {

        if (values[i] == key)
        {
            printf("valor encontrado em %d é %d \n", i, values[i]);
            p[i] = 1;
            continue;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("valor no vetor repetido %d\n", p[i]);
    }
    return p;
}