#include <stdio.h>

int main() {
    //Inicial data 
    unsigned int value = 0x0000; //0, you have 32 bits to spend as flag or as number

    //Changing that to 112
    //112/2 -> 56/2 -> 28/2 -> 14/2 -> 7/2 -> 3/2 - 1/2
    //1110000
    
    //activating
    value |= (1 << 4); // Ativar o bit 4 (16)
    value ^= (1 << 5); // Toggle o bit 5 (32)
    value &= ~(1 << 6); // Clear o bit 6 (64)


    //Print the value
    printf("Value in decimal: %d\n", value);

    return 0;
}


/*
10110011
1 + 2 + 16 + 32 + 128 = 179


01001111 
1 + 2 + 4 + 8 + 64 = 79


124/2 -> 62/2 -> 31/2 -> 15/2 -> 7/2 -> 3/2 -> 1/2 
1111100
4 + 8 + 16 + 32 + 64  = 124


159/2 -> 79/2 -> 39/2 -> 19/2 -> 9/2 -> 4/2 -> 2/2 -> 1/2
10011111
1 + 2 + 4 + 8 + 16 + 128 = 128

112/2 -> 56/2 -> 28/2 -> 14/2 -> 7/2 -> 3/2 - 1/2
1110000
16 + 32 + 64 = 112


*///Who discover this is a fucking genius: Gottfried Wilhelm Leibniz 