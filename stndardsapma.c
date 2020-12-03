#include <stdio.h>
#include <math.h>


#define N 10

double ortalama(int p_array[], int size)
{
   int   i;
   float toplam = 0.0, ort;
   size = N;
   for(i=0; i<N; i++)
   {
      printf("%d. sayi : ",i+1); 
      scanf("%f",&p_array[i]);

      toplam += p_array[i];
   }
   ort = toplam/N;
   printf("Ortalama  = %f\n",ort);

   return ort; 
}
/*

double standartSapma(int p_array[], int size)
{
   int   i;
   float toplam = 0.0, ort, std_sap = 0.0;
   for(i=0; i<N; i++)
   {
      printf("%d. sayi : ",i+1); 
      scanf("%f",&p_array[i]);

      toplam += p_array[i];
   }

   for(toplam = 0.0, i=0; i<N; i++)
       toplam += pow(p_array[i]-ortalama(p_array[], size), 2.0);

   std_sap = sqrt( toplam/(N-1) );


   printf("Standart sapma = %f\n",std_sap);

  return 0;
}
*/
int main(){
    //double ortalama(int , int );//
    double standartSapma(int , int );
}