#include <stdio.h>

int kabarciksiralama(int dizi[10])
{
    for (int i=0; i<10; i++){
        for(int k = 0; k<10s; k++)
        {
            if(dizi[k] > dizi[k+1])
            {
                int temp = dizi[k];
                dizi[k] = dizi[k+1];
                dizi[k+1] = temp;
            }
        }
    }
    return dizi[10];
}

int main()
{
    int dizi[]={2,5,7,8,6,1,52,6,8,24};
    int i, j, enbuyuk;
    enbuyuk = dizi[0];
    for(i=1; i<10 ; i++){
        if (dizi[i]> enbuyuk){
            enbuyuk = dizi[i];
            j = i;
        }
    }
    printf("en buyuk eleman %d indisli %d dir", j, enbuyuk);
    kabarciksiralama(dizi);
    for(int k=0;k<10;k++)
    {
        printf("%5d",dizi[k]);
    }
    return 0;
}
