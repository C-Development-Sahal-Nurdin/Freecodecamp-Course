#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumber[] = {1, 4, 8, 7, 8, 18};

    int i;
    for (i = 0; i < 6; i++){ // 6 KARENA BANYAK ELEMEN ARRAY ADA 6
        printf("%d\n", luckyNumber[i]); // DIMULAI DARI INDEKS 0 yaitu 1
    }
    return 0;
}
