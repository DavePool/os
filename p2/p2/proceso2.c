#include <stdio.h>
#include <unistd.h>

int main()
{
   printf("ID del proceso: %d\n", getpid());
   printf("ID del proceso padre: %d\n", getppid());
   printf("ID del usuario propietario: %d\n", getuid());

   return 0;
}
