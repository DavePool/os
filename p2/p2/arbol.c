#include <stdio.h>
#include <unistd.h>

int main()
{
   int padre = 1;

   for (int i=0; i<999; i++)
   {
       if (padre == 1)
       {
            if (fork() == 0)		// proceso hijo
            {
                printf("Este es el proceso hijo %d con padre: %d\n", getpid(), getppid());
                padre = 0;
            }
            else			// proceso padre
            {
                printf("Este es el proceso padre con ID: %d\n", getpid());
                padre = 1;
            }
       }
   }

   return 0;
}

