#include <unistd.h> /* fork fonksiyonu için */
#include <sys/types.h> /* pid yapısı için */ 
#include <stdio.h> /* klasik girdi çıktı */
#include <stdlib.h> /* standart lib fonksiyonları */
#include <sys/wait.h>

int main(){
	int child_status;
	if (fork()==0){
		printf("HC hello from child\n");
		exit(0);
	} else{
		printf("HP: hello from parent\n");
		wait(&child_status);
		printf("CT : child has terminared\n");
	}	
	printf("Bye\n");
	exit();//bu satırı silince çalışıyor!!
}
