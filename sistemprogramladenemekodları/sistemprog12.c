#include <unistd.h> /* fork fonksiyonu için */
#include <sys/types.h> /* pid yapısı için */ 
#include <stdio.h> /* klasik girdi çıktı */
#include <stdlib.h> /* standart lib fonksiyonları */
#include <sys/wait.h>

int global = 5;
int main(){
	int local = 5;
	int i;
	int junk;
	if (fork()== 0){
		printf("CHILD global address %p\n",&global);
		for (int i = 0; i < 10; ++i){
			local++;
			global++;
			printf("CHILD local address %d global address %p\n",&local, &global);
		}
		exit(EXIT_SUCCESS);
	}
	wait(&junk);
	printf("PARENT global address %p\n",&global);		
	for (int i = 0; i < 10; ++i){
		local--;
		global--;
		printf("PARENT local address %d global address %p\n",&local, &global);
	}
}