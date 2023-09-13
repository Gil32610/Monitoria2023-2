#include <stdio.h>
#include <stdlib.h>

void inputValues(Numbers numbers, float key);
void menu();

typedef struct
{
    float array[100];
    int maxCap;
    int capacity;
    int size;
} Numbers;

int main()
{
    Numbers par;
    printf("Informe o tamanho do vetor de Par:");
    scanf("%d",&par.size);
    par.maxCap = par.size; 

    Numbers impar;
    printf("Informe o tamanho do vetor de Ímpar:");
    scanf("%d", &impar.size);
    impar.maxCap = impar.size;
    menu();
    return 0;
}

void inputValues(Numbers numbers, float key)
{
    if (numbers.size == numbers.capacity)
    {
        printf("VETOR CHEIO\n");
        return;
    }
    if (busca(numbers,key) != -1)
    {
       numbers.array[numbers.capacity] = key;
       numbers.capacity++;
    }
}

int busca(Numbers numbers, float key)
{
    for (int i = 0; i < numbers.size; i++)
    {
        if (numbers.array[i] == key)
        {
            return i;
        }
    }
    return -1;
}

void printArray(Numbers numbers)
{
    for (int i = 0; i < numbers.size; i++)
    {
        printf("valor no indice %d %f\n", i, numbers.array[i]);
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
