void tekcift (int sayitc)
{
       if(sayitc%2==0)
       {
          printf("\n %d Sayi cift", sayitc);
       }             
       else
       {
          printf("\n %d Sayi tek", sayitc); 
       }
}

void asalmi (int sayiasal) 
{
    int i;
    int sayac = 0;
    for(i=1; i<=sayiasal; i++)
    {
       if(sayiasal % i ==0) 
       {
           sayac++;
       }    
    } 
    if(sayac==2)
    {
        printf(" \n %d Asal", sayiasal);                    
    }
    else
    {
        printf(" \n %d Asal degil", sayiasal); 
    }
}

int obeb1(int sayiobeb1, int sayiobeb2)
{
    if(sayiobeb2==0)
    {
        return sayiobeb1;
    }
    else
    {
        return obeb1(sayiobeb2,sayiobeb1%sayiobeb2);
    }
}

int obeb2(int sayiokek1, int sayiokek2)
{
    float sonuc;
    sonuc = (sayiokek1 * sayiokek2) / obeb1(sayiokek1, sayiokek2);
    printf("\n OBEB(%d,%d) = %d", sayiokek1, sayiokek2, sonuc);
    return 0;
}
int okek(int sayiokek1, int sayiokek2)
{
    int ekok;
    int i=1;   

    while(1)
    {
       i++;
       if((i%sayiokek1==0)&&(i%sayiokek2==0))
       {
          ekok = i;     
          break;                         
       }   
    }                 
    printf("\n\nEKOK (%d , %d) = %d",sayiokek1,sayiokek2,ekok);
    return 0;
}

int enbuyuk (int sayi)
{
    int x, buyukrakam, rakam ;
    x = sayi;
    buyukrakam = 0;
    while (sayi > 0)
    {
        rakam = sayi%10;
        sayi /=10;
            if (buyukrakam<= rakam)
                buyukrakam=rakam;
    }
    printf("\n %d sayısının en büyük rakamı %d\n", x, buyukrakam);
    return 0;
}