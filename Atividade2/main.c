#include <stdio.h>
#include <stdlib.h>
void inputValues(float values[], int size);

void media(float media[], float nota1[], float nota2[], int size);

float calcularMedia(float a, float b);
int main()
{
    printf("Hello world!\n");
    int tamanho;
    scanf("%d", &tamanho);
    float nota1[tamanho];
    float nota2[tamanho];
    int situacao[tamanho];
    float media1[tamanho];
    inputValues(nota1, tamanho);
    inputValues(nota2, tamanho);
    media(media1, nota1, nota2, tamanho);
    printArray(media1, tamanho);
    return 0;
}

void inputValues(float values[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Insira a %d nota\n", i + 1);
        scanf("%f", &values[i]);
    }
}

void media(float media[], float nota1[], float nota2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        media[i] = calcularMedia(nota1[i], nota2[i]);
    }
}

float calcularMedia(float a, float b)
{
    float media = ((a * 2) + (b * 3)) / 5;
    return media;
}

void printArray(float array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("valor na posição %d %f\n", i, array[i]);
    }
}
void situacao(int situacao[], float media[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (media[i] >= 7)
        {
            situacao[i] = 1;
        }
    }
}
