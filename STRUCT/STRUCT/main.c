#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char major[20];
    int age;
    double gpa;
};


int main()
{
    struct Student student1;
    student1.age = 19;
    student1.gpa = 3.94;
    strcpy(student1.name, "Sahal");
    strcpy(student1.major, "Computer Science");
    printf("%s \n%f", student1.name, student1.gpa);
    return 0;
}
