#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("D:employees.txt", "w");

    fprintf(fpointer, "MUHAMMAD SAHAL NURDIN, FULLSTACK DEVELOPER\n Nana Komatsu, IT SUPPORT");

    fclose(fpointer);
    return 0;
}
