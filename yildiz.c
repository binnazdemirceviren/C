#include <stdio.h>
int main()
{
    int sayi;
    printf("bir sayı girdiniz:");
    scanf("%d", &sayi);
    for(int i=1; i<=sayi; i++)
    {
        for(int k=1; k<=i; k++)
        {
        printf("*");
        }
        printf("\n");
    }
}