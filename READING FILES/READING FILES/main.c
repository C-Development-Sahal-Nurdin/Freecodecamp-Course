#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];

    FILE * fpointer = fopen("D:employees1.txt", "r");

    fgets(line, 255, fpointer); //UNTUK LINE PERTAMA
    fgets(line, 255, fpointer); // UNTUK LINE KE 2
    printf("%s", line);

    fclose(fpointer);
    return 0;
}
