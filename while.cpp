#include <stdio.h>

int main(void){

    int count = 0;

    // While
    while (count < 100){
        count += 1;
        printf("count: %i | ", count);
        printf("Bytes %i\n", sizeof(count));
    }

    count = 0;

    // While with do while
    do {
        printf("Hi %i", count);
        count += 1;
    } while (count < 11);

    count = 0;
    // For count
    for (count = 0; count <11; count+=1){
        printf("%i", count);
    }
    
    return 0;
}