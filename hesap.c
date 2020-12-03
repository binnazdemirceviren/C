#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int sayi, sayi1, sayi2;
    
     while (sayi!=0)
    {
        printf("\ntoplama için 1,çıkarma işlemi için 2, çarpma işlemi için 3, bölme için 4, çıkmak için 0 giriniz\n");
        scanf("%d", &sayi);
        if (sayi == 1)
        {
            printf("\nişlem yapmak istediğiniz sayıları sırayla giriniz: ");
            scanf("%d%d", &sayi1, &sayi2);
            printf("\ntoplamı: %d", sayi1 + sayi2);
        }
        else if (sayi == 2)
        {
            printf("\nişlem yapmak istediğiniz sayıları sırayla giriniz: ");
            scanf("%d%d", &sayi1, &sayi2);
            printf("\nfarkı= %d", sayi1 - sayi2);
        }
        else if (sayi == 3)
        {
            printf("\nişlem yapmak istediğiniz sayıları sırayla giriniz: ");
            scanf("%d%d", &sayi1, &sayi2);
            printf("\nçarpımı= %d", sayi1 * sayi2);
        }
        else if (sayi == 4)
        {
            printf("\nişlem yapmak istediğiniz sayıları sırayla giriniz: ");
            scanf("%d%d", &sayi1, &sayi2);
            printf("\nbölümü= %f", (float)sayi1 / (float)sayi2);
        }
        else if(sayi ==0)
            printf("çıkış yaptınız");
        else 
            printf("\nyanlış komut girdiniz");
    }
}
