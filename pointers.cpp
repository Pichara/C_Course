#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num; // Pointer pointing to the adress of num

    printf("Value of num: %d\n", num);         // Outputs 10
    printf("Address of num: %p\n", ptr);       // Outputs the address of num
    printf("Address of num: %p\n", &num);       // Also outputs the address of num
    printf("Value at ptr: %d\n", *ptr);        // Dereferences ptr, outputs 10

    *ptr = 20; // Changes num through the pointer
    
    printf("New value of num: %d\n", num);     // Outputs 20

    return 0;
}
