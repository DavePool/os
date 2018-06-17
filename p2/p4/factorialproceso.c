#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

long int factorial (int n){
	
long int resultado = 1;
int num;

for (num=2;num <= n; num++){
	resultado *= num;
	printf("Factorial de %d, resultado parcial %ld\n",n, resultado);
	sleep(2);
}

return resultado;
}

int main(int argc, char *argv[]){
if(argc == 3){
//proceso numero 1
int pid_facx = fork();

if(pid_facx == 0 ){
	printf("El factorial de %s es %ld, con el proceso:%d\n", argv[1], factorial(atoi(argv[1])), getpid());
exit(0);
}

//proceso numero 2
int pid_facy = fork();

if(pid_facy == 0){

	printf("El factorial de %s es %ld, con el proceso: %d\n", argv[2], factorial(atoi(argv[2])), getpid());
exit(0);
}
}
}

