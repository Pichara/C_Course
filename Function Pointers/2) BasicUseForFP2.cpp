#include <stdio.h>


void displayMessage(const char* message) 
{
    printf("Message: %s\n", message);
}

int main(void) 
{
    void (*messageFunc)(const char*);
    
    messageFunc = displayMessage;

    //Using the function pointer to call the function
    messageFunc("Hello, Type Safety!");

    //Or you could use just this way 
    displayMessage("Hello, Type Safety!");
    

    return 0;
}
