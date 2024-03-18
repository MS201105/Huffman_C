#include <stdio.h>
#include<stdlib.h>

#include <time.h>

int main(){
	int a = 15;
	srand(time(NULL));
	int b = rand();
	
	printf("Avos' a = b %d = %d", a, b);
	return 0;
}