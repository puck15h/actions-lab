#include <stdio.h>
#include <stdlib.h>

#ifdef __linux__
	#include <unistd.h>
#elif __windows__
	#include <windows.h>
#else
#endif

int main(void){
	char comand[500];
	while(1){
		printf("info comand: ");
		scanf(" %[^\n]", comand);
		system(comand);
	}
	return 0;
}
