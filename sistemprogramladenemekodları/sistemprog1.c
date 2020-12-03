#include <stdio.h>

int main(){
	
	fork();
	fork();
	printf("hello world");

	if (fork() == 0){
	//child process
	}
	else if(fork() > 0){
	//prent process
	}
}