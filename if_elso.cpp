#include <stdio.h> 


float const pi = 3.13;
float const g = 9.98;

int main(void){
    // && = and
    // || = or
    // ! = not

    if(pi != 3.14 && g != 9.98){
        printf("something is pretty wrong\n\n");
        }

    else{printf("Everthing is fine\n\n");
    }

    int a = 10;
    int b = 10;
    
    if (a < b){
        printf("1\n\n");
    }

    else if (a = b){
        printf("2\n\n");
    }

    else{printf("3\n\n");}

}