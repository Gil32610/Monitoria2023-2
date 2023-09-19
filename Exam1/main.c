#include <stdio.h>
#include <stdbool.h>
 int steps = 0;
 bool isPrimeNumber(int n, int i);
int main(){

    return 0;
}


bool isPrimeNumber(int n, int i){
if(i== n || n<=2)
return true;
if(n%i== 0){
    return false;
}
return isPrimeNumber(n,i+1);
}

int binarySearchWithSteps(int low,int mid,int high, int key, int*array){
    mid = (high+low)/2;

    if(low>=high)
        return -1;
    
    if(getItem(array[mid])==key)
        return mid;
    

    if(getItem(array[mid])>key)
        return binarySearchWithSteps(mid+1, mid, high, key, array);
    
    if(getItem(array[mid])>key)
        return binarySearchWithSteps(low, mid, mid-1, key, array);
    

}


int getItem(int*position){
    steps++;
    return *position;
}





