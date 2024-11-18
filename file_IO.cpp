#include <stdio.h>

int main() {
    //Declaring the file pointer
    FILE *filePtr;

    //To open file in write mode
    filePtr = fopen("example.txt", "w");

    //Write to file
    fprintf(filePtr, "Hello World\n");
    fprintf(filePtr, "File I/O in C, easier than in python");
    
    //Close the file
    fclose(filePtr);


    //Open file in read mode
    filePtr = fopen("example.txt", "r");

    //Read and print each line from the file
    char line[100];
    while (fgets(line, sizeof(line), filePtr)) 
    {
        printf("%s", line); // Print each line
    }
    
    // Close the file
    fclose(filePtr);

    return 0;
}
