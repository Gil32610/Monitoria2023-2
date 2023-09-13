#include <stdio.h>
#include <stdlib.h>

int main()
{
    //using printer and variables
    char name [] = "Gil";
    int age = 21;
    printf("There was a man named %s\n", name);
    printf("He was  years %d old.\n",age);

    age = 45;
    printf("%s was a greedy person.\n",name);
    printf("He conquered fortune at %d years old\n",age);
    printf("Hello world!\n");
    printf("Say hello back, dude.\n");

    //data types
    int shoes = 20;
    double points = 35.0;
    float decimals = 41241.414;
    char grade = 'A';
    char phrase[] = "This is my sentence";


    //printf
    //escape sequence
    printf("\n\"\s\;", name);
    //format specifier
    printf("this is number %d  %f  %s \n", 234,4553.623523, "could i get a number 15");

    //ARITHMETIC OPERATORS
    float operations = 123.521*23.0+1412.2-442.111/2332.444;

    //MATH FUNCTIONS
    printf("%f\n", pow(2,64));
    printf("square root: %f\n", sqrt(64));
    printf("ceiling number: %f\n", ceil(43525.4452));
    printf("flooring number: %f\nf", floor(5376235.252354));
/*
anything between this will be commented
TODO
SPELLS TO DO
*/

//CONSTANTS
//unable to be modifier

const int NUMBER_NOT_CHANGING = 6346;

char NAME[] = "this is a constant";

int x = 20;
int *p;
p = &x;
printf("value of p = %d address of p = %d\n", *p, p );

int number = sum(2,4);
printf("value is %d \n", number );
 int matrix [10][10];
printf("Matrix size is %d \n", sizeof(matrix[0]));
}

int sum (int num1, int num2){

return num1+num2;
}
