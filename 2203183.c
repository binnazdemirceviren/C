#include <stdio.h>

int main()
{
    int decimal, us = 1, binary =0, kalan;
    printf ("ondalık sayı giriniz");
    scanf ("%d", &decimal);


    while(decimal > 0)
    {
        kalan = decimal % 2;
        binary += kalan*us;
        decimal /=2;
        us *=10;
    }
    printf("ikili sayı : %d", binary);
}