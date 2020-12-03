#include <stdio.h>

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
    return 0;
}
