#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
pid_t pid_eog, pid_xload, pidfin;
int num;
time_t ini, fin;

pid_eog = fork();
ini = time(NULL);

if (pid_eog == 0){

	execlp("gwenview", "gwenview", NULL);
	printf("No se encuentra la aplicacion gwnview\n");
	exit(0);
}

pid_xload = fork();
ini = time(NULL);

if(pid_xload == 0){

	execlp("xload", "xload", NULL);
	printf("¿No se encontro la aplicacion xload?\n");
	exit(0);
}
int i = 0;

for(i; i <= 2; i++){
pidfin = wait(NULL);

	if(pidfin == pid_eog){
		printf("Ha terminado gwnview, %ld segundos\n", fin-ini);
		fin = time(NULL);
	}
	else{
		printf("Ha terminado xload, %ld segundos\n", fin-ini);
		fin = time(NULL);
	}
}
	
	return 0;
}
