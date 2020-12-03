#include <unistd.h> /* fork fonksiyonu için */
#include <sys/types.h> /* pid yapısı için */ 
#include <stdio.h> /* klasik girdi çıktı */
#include <stdlib.h> /* standart lib fonksiyonları */

int main(){
	fork();
	fork();
	fork();
	printf("hello\n");
	return 0;
}

// hocanın dediği 8 hello çıktısı 