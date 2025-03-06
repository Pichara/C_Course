#include <stdio.h>

// Function declaration
void greet(const char *name);

int main(void) {
    // Declare a function pointer
    void (*func_ptr)(const char *);

    // Assign the address of the 'greet' function to the pointer
    func_ptr = &greet;

    // Call the function using the pointer
    func_ptr("Mr. Pichara");

    return 0;
}


// Function declaration
void greet(const char *name) {
    printf("Hello, %s!\n", name);
}