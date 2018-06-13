#include <stdio.h>

int main(){

int n;
printf("Hasta que numero quieres la serie?: ");
scanf("%d",&n);
int i =0;

	for(i;i<=n;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}

printf("\n");
return 0;
}
