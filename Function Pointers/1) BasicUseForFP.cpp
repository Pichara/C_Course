#include <stdio.h>

int exampleFunction(int x, float y);

int main(void) {
    //Declaring
    int (*funcPtr)(int, float);

    //Assigning the pointer to the function 
    funcPtr = exampleFunction;

    //Using the function pointer as the function
    int result = funcPtr(5, 3.5);

    //Prints the result
    printf("Result: %d\n", result);

    return 0;
}

int exampleFunction(int x, float y) 
{
    printf("x: %d, y: %.2f\n", x, y);
    return x + (int)y;  // Example return value
}
