#include <unistd.h> /* fork fonksiyonu için */
#include <sys/types.h> /* pid yapısı için */ 
#include <stdio.h> /* klasik girdi çıktı */
#include <stdlib.h> /* standart lib fonksiyonları */
#include <sys/wait.h>

int main(){
	pid_t pid;
	if ( (pid = fork())== 0)
		printf("1");
	else
		printf("2");
	printf("3");
}