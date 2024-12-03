#include <stdio.h>

//Functions

//This is a prototype
float divide(float num1, float num2);

//This is a prototype
int preIncrement(int number);

//This is a prototype
int multiply(int num1, int num2);


int main(void){
    int some_number = 10;
    int other_number = preIncrement(some_number);
    printf("%i\n", other_number);


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

//Return ++number
int preIncrement(int number){
    return ++number;
}

//Return num1 * num2
int multiply(int num1, int num2){
    return num1*num2;
}

//Divide num1 by num2
float divide(float num1, float num2){
    return num1/num2;
}