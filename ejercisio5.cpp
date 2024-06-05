
#include <iostream> 

using namespace std;

int main() {

const float iva= 0.21;
float precio;
float precio_iva;
float total;
cout << "por favor brindar precio de producto" << endl;

cin >> precio;
precio_iva=precio * iva;
cout << "el precio con iva es: " << precio_iva << endl;

total= precio + precio_iva;
cout << "el total es: " << total << endl;

return 0;
}