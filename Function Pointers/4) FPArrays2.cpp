#include <stdio.h>


void isrTimer(void) {
    printf("Timer interrupt handled.\n");
}

void isrUart(void) {
    printf("UART interrupt handled.\n");
}

void isrGpio(void) {
    printf("GPIO interrupt handled.\n");
}

void (*isrDispatchTable[])(void) = {
    isrTimer,  // Index 0: Points to the Timer ISR
    isrUart,   // Index 1: Points to the UART ISR
    isrGpio    // Index 2: Points to the GPIO ISR
};


void handleInterrupt(int interruptType) {
    // Check if the interruptType is within the valid range
    if (interruptType >= 0 && interruptType < (sizeof(isrDispatchTable) / sizeof(isrDispatchTable[0]))) {
        isrDispatchTable[interruptType]();  // Call the appropriate ISR using the dispatch table
    }
    else {
        // Handle invalid interrupt types
        printf("Invalid interrupt type.\n");
    }
}

int main(void) {
    // Simulate handling different interrupts

    // Simulate a Timer interrupt
    printf("Simulating Timer interrupt:\n");
    handleInterrupt(0);  // Index 0 corresponds to the Timer ISR

    // Simulate a UART interrupt
    printf("Simulating UART interrupt:\n");
    handleInterrupt(1);  // Index 1 corresponds to the UART ISR

    // Simulate a GPIO interrupt
    printf("Simulating GPIO interrupt:\n");
    handleInterrupt(2);  // Index 2 corresponds to the GPIO ISR

    // Simulate an invalid interrupt type
    printf("Simulating an invalid interrupt:\n");
    handleInterrupt(3);  // Index 3 is invalid and should print an error message

    return 0;
}
