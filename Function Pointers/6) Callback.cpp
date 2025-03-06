#include <stdio.h>

//Function prototypes for the callback functions
void sayHello();
void sayGoodbye();

//This function takes a function pointer as an argument
void performOperation(void (*callback)());


int main(void) {

    printf("Calling say_hello as a callback:\n");
    performOperation(sayHello); //Executes perform_operation with say_hello as the callback


    printf("\nCalling say_goodbye as a callback:\n");
    performOperation(sayGoodbye); //Executes perform_operation with say_goodbye as the callback

    return 0; //Indicates successful program execution
}


//A callback is function that is called inside of a function!
//This is a callback
void sayHello() {
    printf("Hello, World!\n");
}

//This is other callback
void sayGoodbye() {
    printf("Goodbye, World!\n");
}

//This function takes a function as parameter and then it can call inside of it as a "callback"
void performOperation(void (*callback)()) {
    //Indicates the start of the operation
    printf("Performing operation...\n");

    //Calls the callback function
    callback();

    //Indicates the completion of the operation
    printf("Operation completed.\n");
}
