#include <stdio.h>

int main()
{
    int matris1[3][3]={1,2,3,2,3,4,1,5,9};
    int matris2[3][3]={4,2,3,2,3,4,1,5,9};
    int matris3[3][3];
    for (int m=0; m<3 ; m++){
        for (int n= 0; n<3 ; n++){
        matris3[m][n]= matris1[m][n] + matris2[m][n];
        printf ("%d", matris3[m][n]);
    }
            printf("\n");
    }
    
    return 0;
}