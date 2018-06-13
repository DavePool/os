#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	execlp("gwnview", "gwenview", NULL);
	printf("¿se imprimira este mensaje?\n");
	execlp("xload", "xload", NULL);
	printf("¿Y este otro?\n");
	
	return 0;
}
