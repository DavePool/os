#include <iostream>
#include <string>

using namespace std;

int main(){

int op;
do{
cout<<"\tMenú \n 1 suma con do/while\n 2 suma con for\n 3 salir \ningrese: ";
cin >> op;
cout<<"\n";

int sumad = 0;
int sumaf = 0;
switch(op){
	case 1:
	{
		int i = 1;	

		do{
			sumad += i;
			i ++;
		}while(i <= 100);
		cout <<"La suma es: "<<sumad<<endl;
	break;
	}
	case 2:
	{
		for (int i = 1; i <= 100; i++){
			sumaf += i;
		}		
		cout<<"La suma es: "<<sumaf<<endl;
	break;
	}
	case 3:
		cout<<"Saliendo del programa!!!\n";
	break;

}
}while(op != 3);
return 0;
}
