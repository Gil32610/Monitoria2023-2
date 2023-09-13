#include <stdio.h>
#include <stdlib.h>


void inputValues(float values[], int size, int capacity, float key);

int main(){
float values [3];
inputValues(values,3,0,10.0);
printArray(values);

return 0;
}

void inputValues(float values[], int size, int capacity, float key)
{
    if(size == capacity){
        printf("VETOR CHEIO\n");
        return;
    }
    if(busca(size,values,key) !=-1){
        values[capacity] = key;
    }

}

int busca(int size, float values[], int key){
    for(int i = 0; i<size; i++){
        if(values[i] == key){
            return i;
        }
    }
    return -1;

}

void  printArray (float array [], int size){

    for(int i = 0; i< size; i++){
    printf("valor na posição %d %f\n",i,array[i]);
    }


}
