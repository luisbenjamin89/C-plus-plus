#include <iostream>

using namespace std;

class Saludo
{
public:
    string nombre;
    
 void hi();

};

  void Saludo::hi()
 {
     cout << "Hola " << nombre << endl;
 }

 int main(){
     Saludo saludo;
     saludo.nombre;
     cout << "Ingrese su nombre: " << endl;
     cin >> saludo.nombre;
     saludo.hi();
     return 0;
 }