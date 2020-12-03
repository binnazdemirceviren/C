#include<stdio.h>
int bar(int[3][3], int, int);
int main()
{
    int matris[3][3]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int satir =3, sutun=3;
    int sonuc = bar(matris, satir, sutun);
    printf("diagonal elemanların toplamı =%d", sonuc);
    return 0;

}

int bar (int matris[3][3], int sa, int su)
{
    int i, j;
    int toplam= 0;
    for (i=0; i < sa ;i++)
    {
        for(j=0; j<su; j++)
        {
            if (i == j)
            {
                toplam = toplam + matris[i][j]*2;
            }
        }
    }
    return toplam;
}