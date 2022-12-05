#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 19;
    int *pAge = &age;

    printf("%d\n",&age);
    // DEFRENCING POINTERS INITNYA MENGUBAH HEX POINTER KE ASAL NILAINYA DI SINI KE 19
    printf("%d",*&age);
    return 0;
}
