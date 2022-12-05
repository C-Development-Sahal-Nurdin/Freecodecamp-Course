#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumber[] = {1,7,18, 9, 100};
    luckyNumber[0] = 1000;
    printf("%d\n",luckyNumber[0]);
    char karakter[10]; // HARUS DISPESIFIKASIKAN
    karakter[0] = 'a';
    printf("%c",karakter[0]);
    return 0;
}
