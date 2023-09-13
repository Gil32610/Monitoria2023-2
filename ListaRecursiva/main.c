#include <stdio.h>


void reverseString(char word [], int size);
void revertingString(char sequence [],int beginning, int last);
int main()
{
char sequence [] = "abcd";
printf("%s\n", sequence);
int size = sizeof(sequence)/2;
reverseString(sequence,size);
printf("%s\n", sequence);
    return 0;
}

 void reverseString(char word[], int size){

    revertingString( word,0,size);
}


void revertingString(char sequence[],int beginning, int last){
if(beginning >= last){
    return;
}
char aux = sequence[beginning];
sequence[beginning] = sequence[last];
sequence[last] = aux;
revertingString(sequence,beginning+1, last-1);
}