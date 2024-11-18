#include <stdio.h>

//Try to run this in the cmd to pass arguments to the main: cd this folder, then "command_line_argument.cpp Hello World"


int main(int argc, char *argv[]) 
{
    printf("Number of arguments: %d\n", argc);
    for (int i = 0; i < argc; i++) 
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    
    return 0;
}
