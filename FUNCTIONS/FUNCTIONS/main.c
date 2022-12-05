#include <stdio.h>
#include <stdlib.h>


// FUNGSI BARU MENGGUNAKAN VOID DI MANA TIDAK ADA RETURN STATEMENT
void sayHi()
{
    printf("Hello World!!!\n");
}

// MENGGUNAKAN PARAMETER

void sayHi1(char name[], int age)
{
    printf("Hello World!!! %s %d", name, age);
}

int main()
{
    sayHi();
    sayHi1("SAHAL",18);
    return 0;
}


