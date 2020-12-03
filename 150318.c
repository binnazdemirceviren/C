#include <stdio.h>
/*
int main (int x)
{
    x = 1881;
    int sayi;
    printf ("bir sayı giriniz:");
    scanf("%d", &sayi);
    while (x!=sayi)
    {
        printf("tekrar deneyiniz yanlış sayı girdiniz:");
        scanf("%d", sayi);
    }
    return 0;
}
*/

int main()
{
    int sayi = 20, tahmin;
    printf("tahmininizi giriniz: ");
    scanf("%d", &tahmin);
    while(1)
    {
        if (tahmin == sayi)
        {
            puts ("tebrikler, doğru sayıyı girdiniz.");
            break;
        }
        else
        {
            printf("yanlış tahmin. tekrar deneyiniz:");
            scanf ("%d", &tahmin);
        }
    }
    return 0;
}