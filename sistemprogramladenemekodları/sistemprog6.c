#include <unistd.h> /* fork fonksiyonu için */
#include <sys/types.h> /* pid yapısı için */ 
#include <stdio.h> /* klasik girdi çıktı */
#include <stdlib.h> /* standart lib fonksiyonları */

int main(){
	printf("L0\n");
	if(fork() == 0){
		printf("L1\n");
		if(fork() ==0 ){
			printf("L2\n");
			fork();
		}
	}
	printf("Bye\n");
}