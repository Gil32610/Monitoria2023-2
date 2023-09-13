#include <stdio.h>
#include <stdlib.h>

void inputValues(float values[], int size, int *capacity, float key);
void menu();

typedef struct
{
    float array[100];
    int maxCap;
    int capacity, *pcapacity;
} numbers;

int main()
{
    printf("Informe o tamanho dos vetores:");
    int size;
    scanf("%d", &size);
    float values[3];
    int capacity1, capacity2, *pcapacity2, *pcapacity1;
    int capacity1 = 0;
    pcapacity1 = &capacity1;
    inputValues(values, 3, pcapacity1, 10.0);
    size = sizeof(values) / 4;
    printArray(values, size);
    return 0;
}

void inputValues(float values[], int size, int *capacity, float key)
{
    if (size == *capacity)
    {
        printf("VETOR CHEIO\n");
        return;
    }
    if (busca(size, values, key) != -1)
    {
        values[*capacity] = key;
        *capacity++;
    }
}

int busca(int size, float values[], int key)
{
    for (int i = 0; i < size; i++)
    {
        if (values[i] == key)
        {
            return i;
        }
    }
    return -1;
}

void printArray(float array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("valor na posi��o %d %f\n", i, array[i]);
    }
}

void menu()
{
    printf("1 - Inserir número par\n");
    printf("2 - Inserir número impar");
    printf("3 - Exibir capacidade do vetor ímpares\n");
    printf("4 - Exibir capacidade do vetor pares\n");
    printf("5 - Remover elemento do vetor de ímpares");
    printf("6 - Remover elemento do vetor de pares\n");
    printf("7 - Exibir elementos de ambos os vetores\n");
}
