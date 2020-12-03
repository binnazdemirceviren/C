#include <unistd.h> /* fork fonksiyonu için */
#include <sys/types.h> /* pid yapısı için */ 
#include <stdio.h> /* klasik girdi çıktı */
#include <stdlib.h> /* standart lib fonksiyonları */

int main(){
	pid_t pid;
	pid = fork();
	if (pid == 0){
		printf("hello from child\n");
	}
	else if(pid > 0){
		printf("hello from parent\n");
	}
}