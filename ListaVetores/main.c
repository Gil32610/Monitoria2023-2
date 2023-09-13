#include <stdio.h>
void printArray(int array[],int size);
int main()
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(vetor) / 4;
    printArray(vetor, size);
    int sequence[] = odd(vetor, size);
    printArray(sequence, size);
    int sequence1[] = pair(vetor,size);
    printArray(sequence1, size);
    return 0;
}

int *pair(int values[], int size)
{
    int sequence[size];
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (values[i] % 2 == 0)
        {
            sequence[index++] = values[i];
        }
    }
    return sequence;
}

int *odd(int values[], int size)
{
    int index = 0;
    int sequence[size];
    for (int i = 0; i < size; i++)
    {
        if (values[i] % 2 != 0)
        {
            sequence[index++] = values[i];
        }
    }
    return sequence;
}
void  printArray (int array [], int size){

    for(int i = 0; i< size; i++){
    printf("valor na posição %d %f\n",i,array[i]);
    }


}