#include <stdio.h>
#include <stdlib.h>

//Creates this typedef to use as a parameter to input to a function bellow, but that is not a that readable method 
typedef int (*CompareFunction)(const void*, const void*);

void sortArray(int* pArray, size_t length, int compare(const void*, const void*)) //Or you could do just CompareFunction compare 
{
    qsort(pArray, length, sizeof(int), compare);
}

int compareAscending(const void* pA, const void* pB) {
    int intA = *(int*)pA;
    int intB = *(int*)pB;
    return (intA - intB);
}

int compareDescending(const void* pA, const void* pB) {
    int intA = *(int*)pA;
    int intB = *(int*)pB;
    return (intB - intA);
}

void printArray(int* pArray, size_t length) {
    for (size_t i = 0; i < length; i++) {
        printf("%d ", pArray[i]);
    }
    printf("\n");
}


int main(void) {
    int data[] = { 5, 2, 9, 1, 5, 6 };
    size_t length = sizeof(data) / sizeof(data[0]);

    // Sort in ascending order
    printf("Sorting in ascending order:\n");
    sortArray(data, length, compareAscending);
    printArray(data, length);

    // Sort in descending order
    printf("Sorting in descending order:\n");
    sortArray(data, length, compareDescending);
    printArray(data, length);

    return 0;
}
