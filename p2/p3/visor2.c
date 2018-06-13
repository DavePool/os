#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
pid_t pid_eog, pid_xload, pidfin;
int num;

pid_eog = fork();

if (pid_eog == 0){

	execlp("Gwenview", "Gwnview", NULL);
	printf("No se encuentra la aplicacion gwnview\n");
	exit(0);
}

pid_xload = fork();
if(pid_xload == 0){

	execlp("xload", "xload", NULL);
	printf("¿No se encontro la aplicacion xload?\n");
	exit(0);
}
int i = 0;

for(i; i <= 2; i++){
pidfin = wait(NULL);
	if(pidfin == pid_eog)
		printf("Ha terminado gwnview\n");
	else
		printf("Ha terminado xload\n");
}
	
	return 0;
}
