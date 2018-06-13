#include <iostream>
#include <string>

using namespace std;

int main(){

int venta;
int base = 3500;

cout << "Introduce el monto de venta: ";
cin >> venta;

if (venta > 5000 && venta < 7000){
base += (venta*0.02);
}else if(venta > 7000 && venta < 10000){
base += (venta *0.05);
}else if(venta > 10000){
base += (venta*0.10);
}

cout <<"El sueldo del vendedor es de: "<<base<<endl;
}
