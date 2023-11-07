#include <stdio.h>
#include <stdlib.h>

int currentPosition = 0;
int getFirst(int *matringMatrix, int columns);
int getLast(int *matringMatrix, int columns);
int* characters(int* matringMatrix, int columns);
void setChar (int* word, int value);
int main()
{
    int row = 4;
    int column = 5;
    int matring[4][5] = {{4, 1, 8, 0, 5},
                         {9, 9, 9, 3, 4},
                         {3, 9, 1, 2, 7},
                         {2, 3, 6, 5, 9,}};
    int first = getFirst((int *)matring, 5);
    int last = getLast((int*)matring,5);
    int* word = characters((int*)matring, 5);
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
int* characters(int* matringMatrix,int columns){
    int* word = (int*) malloc((sizeof(int))*3);
    int decimal =1000;
    int mi =0;
    for(int i =1; i< 4;i++){
        for(int j = 0; j< columns-1;j++){
          printf("Cell value is: %d\n",*((matringMatrix + (j * 5)) + i));
          mi += *((matringMatrix + (j * 5)) + i) * decimal;
            decimal/=10;
           if(decimal<=0) break;  
        }
        printf("Mi value is: %d\n",mi);
        setChar(word,mi);
        decimal =1000;
      mi =0;
    }
    currentPosition = 0;
    return word;

}

void setChar (int* word, int value){
    word[currentPosition++] = value;
}
