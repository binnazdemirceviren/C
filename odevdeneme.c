#include <stdio.h>
#include "odev.h"

void tekcift (int sayitc)
{
       if(sayitc%2==0)
       {
          printf("\nSayi cift");
       }             
       else
       {
          printf("\nSayi tek"); 
       }
}

void asalmi (int sayiasal) 
{
    int i;
    int sayac;
    for(i=1; i<sayiasal; i++)
    {
       if(sayiasal % i ==0) 
       {
           sayac++;
       }    
    } 
    if(sayac==1)
    {
        printf("Asal");                    
    }
    else
    {
        printf("Asal degil"); 
    }
}
    int obeb(int sayiobeb1, int sayiobeb2)
    {
        int ebob;
        int kucuk;
        int h;

        if (sayiobeb1 > sayiobeb2) 
            kucuk = sayiobeb1;
        else 
            kucuk = sayiobeb2;
        
        for (h = kucuk; h >= 1; h--) {
            if ((sayiobeb1 % h == 0) && (sayiobeb2 % h == 0)) {
                ebob = h;
                break;
            } 
            else 
                continue;
        }
        printf("EBOB %d\n", ebob);
        return 0;
    }

int okek(int sayiokek1, int sayiokek2)
{
    int sonuc;
    sonuc = (sayiokek1 * sayiokek2) / obeb(sayiokek1, sayiokek2);
    printf("OKEK(%d,%d) = %d", sayiokek1, sayiokek2, sonuc);
    return 0;
}

int enbuyuk (int sayi)
{
    int buyukrakam, rakam ;
    buyukrakam = rakam;
    while (sayi > 0)
    {
        rakam = sayi%10;
        sayi /=10;
            if (buyukrakam<= rakam)
                buyukrakam=rakam;
    }
    printf("%d\n",buyukrakam);
}

int main()
{
    int sayitc;
    int sayiasal;
    int rakam,buyukrakam;
    int sayiobeb1, sayiobeb2;
    int sayiokek1, sayiokek2;
    int sayi;
    printf ("\n tek mi cift mi ögrenmek istediginiz sayiyi giriniz:");
    scanf ("%d", &sayitc);
    tekcift(sayitc); 
    printf ("\n asal mı olduğunu ögrenmek istediginiz sayiyi giriniz:");
    scanf ("%d", &x);
    asalmi (x);
    printf("1.sayi\n");
    scanf("%d", &sayiobeb1);
    printf("2.sayi\n");
    scanf("%d", &sayiobeb2);
    obeb (sayiobeb1, sayiobeb2);
    printf ("\n OKEKini bulmak istediginiz iki sayıyı sırayla giriniz:");
    scanf ("%d", &sayiokek1);
    scanf ("%d", &sayiokek2);
    okek (sayiokek1, sayiokek2);
    printf ("\n en buyuk rakamını bulacagınız sayıyı giriniz:");
    scanf ("%d", &sayi);
    enbuyuk (sayi);
    return 0;
}

