#include <unistd.h>
#include <stdio.h>

void mifuncion(int a, int b){

	if(fork()== 0){
		a = a +3;
	}else{
		b = b *4;
	}	
	printf("Valor de a es %d y de b es %d\n", a, b);
}

int main(int argc, char *argv[]){

	int a = 4;
	int b = 6;

	mifuncion(a,b);
	sleep(5);

	return 0;
}
