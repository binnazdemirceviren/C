#include <stdio.h>
#include <stdlib.h>

void sifrele(char x[]){
  int sifre;
  for(int i=0; x[i] != '\0'; i++){
    sifre = x[i];
    if( sifre >= 'a' && sifre <= 'z'){
      sifre = sifre + (i % 4) + 1;
      if(sifre > 'z'){
        sifre = sifre - 'z' + 'a' - 1;
      }
      x[i] = sifre;
    }
    else if(sifre >= 'A' && sifre <= 'Z'){
      sifre = sifre + (i % 4) + 1;
      if(sifre > 'Z'){
        sifre = sifre - 'Z' + 'A' - 1;
      }
      x[i] = sifre;
    } 
  }
  printf("SIFRELI SOZCUK : %s\n",x);
}

void sifreCoz(char y[]){
  int desifre;
  
  for(int i = 0; y[i] != '\0'; i++){
    desifre = y[i];
    
    if(desifre >= 'a' && desifre <= 'z'){
      desifre = desifre - (i % 4) - 1;
      if(desifre < 'a'){
        desifre = desifre + 'z' - 'a' + 1;
      }
      y[i] = desifre;
    }
    else if(desifre >= 'A' && desifre <= 'Z'){
     desifre = desifre - (i % 4) - 1;
      if(desifre < 'A'){
        desifre = desifre + 'Z' - 'A' + 1;
      }
      y[i] = desifre; 
    }
  }
  printf("COZULMUS SOZCUK : %s\n",y);
}

int main(){
  char mesaj[] = "BINNAZ";
  printf("ORIJINAL SOZCUK : %s\n",mesaj);
  sifrele(mesaj);
  sifreCoz(mesaj);
}