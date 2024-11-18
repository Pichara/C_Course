#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};


struct Person {
    char name[50];
    int age;
    float height;
    date birthday;
};

void add_birtday(Person*, int, int, int);

int main(void) {
    // Create a variable of type struct Person
    struct Person jose = {
        "Jose", 50, 6.1
    };

    add_birtday(&jose, 1965, 12, 03);
    // Access and print the values
    printf("Name: %s\n", jose.name);
    printf("Age: %d\n", jose.age);
    printf("Height: %.1f\n", jose.height);
    printf("Birthday : %i/%i/%i", jose.birthday.year, jose.birthday.month, jose.birthday.day);

    return 0;
}


void add_birtday(Person *person, int y, int m, int d){
    person->birthday.day = d;
    person->birthday.month = m;
    person->birthday.year = y;
}