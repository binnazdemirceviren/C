#include <stdio.h> 
//klavyeden girdiğin sayının yüzde 25i 100mü?
int main()
{
    int sayi;
    printf ("sorgulamak istediğiniz saıyı giriniz:");
    scanf ("%d", &sayi);
    if (sayi*25/100 == 100)
    
        printf ("aradığınız sayıyı buldunuz ");
    else
        printf ("aradığınız sayı bu değil");
    return 0;
}