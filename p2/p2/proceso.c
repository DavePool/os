#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

int valor_retorno = 0;

printf("bifurcacion(forking) de procesos\n");
valor_retorno = fork();


printf("El ID del proceso es %d y regresa %d\n", getpid(), valor_retorno);
}
