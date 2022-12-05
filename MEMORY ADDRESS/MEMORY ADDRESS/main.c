#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 19;
    double gpa = 3.94;
    char grade = 'A';
    printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);
    return 0;
}
