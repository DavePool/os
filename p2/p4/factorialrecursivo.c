#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

long int factorial (int n){
	
	if(n == 0 || n == 1){
		return 1;
	}
	else{
		int i = n * factorial(n-1);
		printf("%ld\n",i);
		sleep(1);
		return i;
	}	
}


int main(int argc, char *argv[]){
if(argc == 2){
//proceso numero 1
int pid_facx = fork();

if(pid_facx == 0 ){
printf("El factorial de %s es %ld, con el proceso:%d\n", argv[1], factorial(atoi(argv[1])), getpid());
exit(0);
}

/*proceso numero 2
int pid_facy = fork();

if(pid_facy == 0){

	printf("El factorial de %s es %ld, con el proceso: %d\n", argv[2], factorial(atoi(argv[2])), getpid());
exit(0);
}
*/
}
}

