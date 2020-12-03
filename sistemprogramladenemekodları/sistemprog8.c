#include <unistd.h> /* fork fonksiyonu için */
#include <sys/types.h> /* pid yapısı için */ 
#include <stdio.h> /* klasik girdi çıktı */
#include <stdlib.h> /* standart lib fonksiyonları */

int main(){
	if (fork()==0){
		printf("Terminating child; PID%d\n", getpid() );
		exit(0);
	} else{
		printf("Running Parent, PID%d\n", getpid());
		while(1);
	}	

}
