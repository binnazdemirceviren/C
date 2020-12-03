#include <stdio.h>
//iki sayıyı karşılaştır ve büyük olan çift mi tek mi kontrol et

int main()
{
    int sayi1, sayi2;
    printf("birinci sayiyi giriniz :");
    scanf("%d", &sayi1);
    printf("ikinci sayiyi giriniz :");
    scanf("%d", &sayi2);

    if(sayi1 > sayi2)
    {
        if (sayi1%2 == 0)
        printf("birinci sayı büyük ve çifttir. \n");
        else
        printf("birinci sayı büyük ve tektir. \n");
    }
    else
    {
        if (sayi2> sayi1)
        printf("ikinci sayı büyük ve çifttir. \n");
        else
        printf("ikiinci sayı büyük ve tektir. \n");
    }
    return 0;
}


