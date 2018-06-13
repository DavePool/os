#include <iostream>
#include <string>

using namespace std;

int main(){

int n;
cout << "introduce un valor entero n: ";
cin >> n;

cout << "los multiplos de 4 entre 4 y "<<n<<"son"<<endl;

for(int i = 0; i <= n; i++){
if(i%4==0){
	cout<<" "<<i<<endl;
}
}

}
