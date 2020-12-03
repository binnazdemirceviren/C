#include <stdio.h>
//10 tane sayıyı döngüyle ortalama al
int main()
{
    int i, sayi, toplam;
    toplam = 0;
    for(i=0; i<10; i++)
    {
        printf ("%d . sayı giriniz", i++);
        scanf("%d", &sayi);
        toplam+=sayi;
    }
    printf("ortalama : %d",(float)toplam/i);
}

