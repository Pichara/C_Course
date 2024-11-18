#include <stdio.h>


int main(void){

    float sum = 0.0;
    int student_marks[5] = {45, 100, 96, 57, 63};
    for(int count=0; count<5; count++){
        
        sum +=  (float)student_marks[count];
        printf("(%i) - %.2f\n", count+1, sum);
    }

    sum /= 5;
    printf("Mean: %.2f", sum);

    return 0;
}