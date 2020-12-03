#include <stdio.h>

int ortalama(int [], int); //fonksiyon bildirimi yaptım

int main()
{
    int dizi[] ={ 1, 4, 11, 45, 23, 56};
    int n = 7;
    printf ("diziniin toplamı: %d ", ortalama(dizi, n));
    printf("dizinin ortalaması= %d", ortalama(dizi, n)/n);
    return 0;
}

int ortalama(int gelen[], int boyut)//fonksiyonun tanımlanması yapıldı
{
    int i, toplam=0;
    for(i=0; i<boyut; i++)
    {
        toplam=toplam + gelen[i];
    }
    return toplam;
}