#include <stdio.h>

int main()
{
    int matris1[3][3];
    for (int m=0; m<3 ; m++){
        for (int n= 0; n<3 ; n++){
            printf ("matris1 için değerleri tek tek giriniz");
            scanf("%d", &matris1[m][n]);
    }
            printf("\n");
    }

    int matris2[3][3];
    for (int m=0; m<3 ; m++){
        for (int n= 0; n<3 ; n++){
            printf ("matris 2 için değerleri tek tek giriniz");
            scanf("%d", &matris2[m][n]);
    }
            printf("\n");
    } 
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