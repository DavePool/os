#include <stdio.h>
#include <unistd.h>

int main(){

	int prof, anch;
	int profundidad = 3;
	int anchura = 3;

	for(prof =0; prof < profundidad-1; prof++){

		if(fork() != 0){
			break;
		}
	}

	for(anch=0; anch < anchura -1; anch++){
		if(fork() == 0)
			break;
	}
	
	sleep(10);

	return 0;

}
