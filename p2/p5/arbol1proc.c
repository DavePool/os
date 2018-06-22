#include <stdio.h>
#include <unistdd.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
 int cont1, cont2, nuevo;
        pid_t pid, npid;
        int n=3;

        printf("Soy el proceso padre original: %d\n",getpid());

        for(cont1=0; cont1 < n; cont1++){

                pid = getpid();
                for (cont2=0; cont2 < cont1+2; cont2++){
                        nuevo = fork();
                        if(nuevo == 0){
                        break;
                        }
                        npid = getpid();
                        if(npid == pid)
                        break;
                }

        }
        sleep(10);

}
