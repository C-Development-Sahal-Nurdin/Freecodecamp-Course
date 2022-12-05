#include <stdio.h>
#include <stdlib.h>

int main()
{
    // CARA MEMINTA INPUT STRING DARI USER
    // CARA 1: NAMUN INI HANYA BISA DIPAKAI UNTUK KATA PERTAMA SEBELUM SPASI PERTAMA
    char nameDepan[20];
    char nameBelakang[20];
    printf("Masukkan nama kamu: ");
    // scanf("%s", name);
    // printf("Nama kamu adalah %s", name); // TIDAK MEMERLUKAN &

    // CARA 2: KEKURANGANNYA ADALAH INI AKAN PINDAH BARIS, JIKA ADA TEKS SETELAH INPUT MAKA AUTO KE BAWAH
    // fgets(name, 20, stdin);
    // printf("Nama kamu adalah %s djnak", name); // djnak LANGSUNG KE BAWAH

    // CARA 3: PALING TEPAT
        printf("Masukkan nama kamu: ");
    scanf("%[^\n]*c", nameDepan); // error
    printf("Masukkan nama kamu: ");
    scanf("%[^\n]*c", nameBelakang);
    printf("Nama kamu adalah %s dajdajdajk", nameDepan);
    printf("Nama kamu adalah %s dajdajdajk", nameBelakang);

    // UNTUK DOUBLE MAKA MENGGUNAKAN LF (LONG FLOAT)
    // double angka;
    // printf("Masukkan angka kamu: ");
    // scanf("%lf", &angka);
    // printf("Angka kamu adalah %lf", angka);

    return 0;
}
