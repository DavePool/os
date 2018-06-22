#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
   int padre = 1;

   for (int i=0; i<2; i++)
   {
       if (padre == 1)
       {
            if (fork() == 0)		// proceso hijo
            {
                printf("\n2- Este es el proceso hijo %d con padre: %d\n", getpid(), getppid());
                padre = 0;
		for(int y=0; y<3; y++){
			if(fork() == 0){
				printf("\n3- Este es el proceso hijo %d con padre: %d\n", getpid(), getppid());
				
				for(int x= 0; x<4;x++){
					if(fork() == 0){
						printf("\n4- Este es el proceso hijo %d con padre: %d", getpid(), getppid());
						exit(0);
					}else{
						printf("\n4-- Este es el proceso padre con ID: %d\n", getpid());
					}
					exit(0);
				}
			}else{
				printf("\n3--Este es el proceso padre con ID: %d\n", getpid());
				padre = 1;
			}
		}
            }
            else			// proceso padre
            {
                printf("\n 2.- Este es el proceso padre con ID: %d\n", getpid());
                padre = 1;
            }
       }
   }

   return 0;
}

