#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Prototypes
void cmd_help();
void cmd_add();
void cmd_subtract();
void cmd_exit();
void perform_operation(void (*callback)());

typedef struct {
    const char* command;
    void (*handler)();
} Command;

int main(void) {
    Command commands    [] = {
        {"help", cmd_help},
        {"add", cmd_add},
        {"subtract", cmd_subtract},
        {"exit", cmd_exit}
    };

    const int num_commands = sizeof(commands) / sizeof(commands[0]);
    char input[50];

    printf("Command-Line Interpreter. Type 'help' for a list of commands.\n");

    while (1) {
        printf("\n> ");
        scanf_s("%49s", input, (unsigned int)sizeof(input)); // Using scanf_s for safe input

        int found = 0;
        for (int i = 0; i < num_commands; ++i) {
            if (strcmp(input, commands[i].command) == 0) {
                perform_operation(commands[i].handler);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Unknown command: '%s'. Type 'help' for a list of commands.\n", input);
        }
    }

    return 0;
}


void cmd_help() {
    printf("Available commands: help, add, subtract, exit\n");
}
 
void cmd_add() {
    int a, b;
    printf("Enter two numbers to add: ");
    scanf_s("%d %d", &a, &b); // Using scanf_s for integer input
    printf("Result: %d\n", a + b);
}
 
void cmd_subtract() {
    int a, b;
    printf("Enter two numbers to subtract: ");
    scanf_s("%d %d", &a, &b); // Using scanf_s for integer input
    printf("Result: %d\n", a - b);
}
void cmd_exit() {
    printf("Exiting the program. Goodbye!\n");
    exit(0);
}

void perform_operation(void (*callback)()) {
    if (callback != NULL) {
        callback();
    }
    else {
        printf("Invalid operation.\n");
    }
}
