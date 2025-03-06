#include <stdio.h>

void option1();
void option2();
void option3();

int main(void) {
    //Declaring array of function pointers and already assigning it
    void (*menu[])(void) = { option1, option2, option3 };
    
    int choice;

    //Infinite loop to keep displaying the menu until the user chooses to exit
    while (1) {
        //Display the menu options to the user
        printf("\nMenu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        //Read the user's choice
        scanf_s("%d", &choice);

        //Check if the user's choice is between 1 and 3
        if (choice >= 1 && choice <= 3) 
        {
            //Call the corresponding function using the function pointer array
            menu[choice - 1]();
        }
        else if (choice == 4) {
            //If the user selects 4, exit the loop and end the program
            printf("Exiting program.\n");
            break;
        }
        else {
            //If the user enters an invalid choice, display an error message
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void option1() {
    printf("You selected Option 1\n");
}

void option2() {
    printf("You selected Option 2\n");
}

void option3() {
    printf("You selected Option 3\n");
}
