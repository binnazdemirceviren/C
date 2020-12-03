#include <unistd.h> /* fork fonksiyonu için */
#include <sys/types.h> /* pid yapısı için */ 
#include <stdio.h> /* klasik girdi çıktı */
#include <stdlib.h> /* standart lib fonksiyonları */

int main(){
	int x=1;
	pid_t pid;
	pid = fork();
	if (pid==0){
		printf("child has x= %d\n",++x );
	} else{
		printf("parent has x= %d\n", --x);
	}
	printf("bye from process %d with x %d\n",getpid(), x);
}
