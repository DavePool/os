#include <iostream>
#include <string>

using namespace std;

int main(){

int p =0;
int im =0;

for(int i = 1; i<= 200;i++){
if(i%2==0){
p += i;
}else{
im += i;
}

}
cout <<"La suma de los pares es: "<<p<<" y de los impares es: "<<im<<endl;

}
