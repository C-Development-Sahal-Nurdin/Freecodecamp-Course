#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'A';
    switch(grade) {
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did a good job!");
         break;
    case 'C':
        printf("You did alright!");
         break;
    case 'D':
        printf("You did poorly");
         break;
    case 'E':
        printf("You did very bad!");
         break;
    case 'F':
        printf("You failed!");
         break;
    default:
        printf("You entered the wrong grade!");
    }
    return 0;
}
