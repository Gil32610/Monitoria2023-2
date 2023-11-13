#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//This program will take as input a double value then output its square root

//Algorithm used: Binary Search
double calculateSquareRoot(double number);

double binarySearch(double low, double number, double high);

int main(){
double number;
printf("Insert a number: \n");
scanf("%lf", &number);

double squareRoot = calculateSquareRoot(number);
printf("Square root of %.0lf is: %.4lf",number,squareRoot);


}

double calculateSquareRoot(double number){


return binarySearch(1,number,number);

}

double binarySearch(double low,double number,double high){
    double mid = (high+low)/2;

    double square = (mid*mid);

    if(fabs(square - number) <= 0.001){

        return mid;
    }
    else if(fabs(square) > number){
        return binarySearch(low, number, mid);
    }
    else if(fabs(square) < number){
        return binarySearch(mid, number, high);
    }
    

}








