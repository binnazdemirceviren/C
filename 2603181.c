#include <stdio.h>

int main()
{
    int deger, toplam = 0;
    printf ("bir değer giriniz:");
    scanf ("%d", &deger);
    while(deger !=10)
    {
        toplam = toplam + deger;
        printf ("bir değer giriniz:");
        scanf("%d", &deger);
    }
    printf ("toplam = %d", toplam);
    return 0;
}