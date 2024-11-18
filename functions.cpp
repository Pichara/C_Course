#include <stdio.h>

//Functions

//Divide num1 by num2
float divide(float num1, float num2);

//This is a prototype, return ++number
int preIncrement(int number);

//This is a prototype, return num1 * num2
int multiply(int num1, int num2);


int main(void){
    int somenumber = 10;
    int somenumberplusone = preIncrement(somenumber);
    printf("%i\n", somenumberplusone);


    int a = 10;
    int b = 5;
    int c = multiply(a,b);
    printf("%i\n", c);

    float e = 45;
    float f = 10;
    float division = divide(e, f);
    printf("%.2f", division);

     return 0;
}

int preIncrement(int number){
    return ++number;
}

int multiply(int num1, int num2){
    return num1*num2;
}

float divide(float num1, float num2){
    return num1/num2;
}