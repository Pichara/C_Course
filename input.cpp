#include <stdio.h>


int main(void){
    
    //fgets
    printf("Enter your last name: ");
    char last_name[20];
    fgets(last_name, sizeof(last_name), stdin);

    //scanf
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);
    
    //scanf_s 
    printf("Enter your name: ");
    char name[20];
    scanf_s("%19s", name, sizeof(name));

    printf("You are %s %s, and are %i years old", name, last_name, age);


}