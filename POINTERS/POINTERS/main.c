#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 19;
    // INI AKAN STOR POINTERS KE DALAM SEBUAH VARIABEL
    // INITINYA POINTERS AKAN MENGGUNAKAN PYSICAL MEMORY ADDRESS DI DALAM RAMDARI SUATU VARIABEL KE DALAM VARIABEL LAIN.
    int *pAge = &age;
    double gpa = 3.94;
    double *pgpa = &gpa;
    char grade = 'A';
    char * pgrade = &grade;
    printf("age's memory address: %p", &age);

    return 0;
}
