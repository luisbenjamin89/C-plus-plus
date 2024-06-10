#include <iostream>

using namespace std;

class Barco
{
public:
 int potencia;

  void mostrar();   
int ingrepot();
};
   void Barco::mostrar(){
cout << "Introduzca la potencfia :";
cin >> potencia;
cout << "La potencia es: " << potencia << endl;
int ingrepot();
}


int Barco::ingrepot() {
    int pot=0;
 pot = potencia+100;

    return pot;
}


int main()
  {
    Barco barco1;
 barco1.mostrar();
cout << "La potencia ingrementada es : " <<  barco1.ingrepot() << endl;

  };

