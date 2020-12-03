#include <stdio.h>

int main(){
  int n, i;
  printf("bir sayı giriniz: ")
  scanf("%d", &n);
  int sayi[n];
  sayi[0] = 1;
  sayi[1] = 1;
  for(i=2; i<=n; i++){
      sayi[i] = sayi[i-1] + sayi[i-2];
  }
  printf("istediğiniz sayı %d", sayi[n]);
 
}