#include <stdio.h>
#include <unistd.h>

int main(){
printf("Uno %d\n",getpid());
int valor = fork();
printf("dos %d %d\n",getpid(), valor);
return 0;
}
