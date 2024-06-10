#include <iostream>

using namespace std;

class Moto
{
public:
 int velocidad;

  void mostrar();
int cremento(int aumento);
int fast();
};


void Moto::mostrar(){

 cout<<"La velocidad de la moto es : "<<  velocidad << "\n";

};

int Moto::cremento(int aumento){
    int resultado;
resultado = velocidad + aumento;
 
    return resultado;

};
int Moto::fast(){
     int n;

    n =  rand() %200;
    return n;

};

int main(){
        int aumento;
srand(time(0));
    Moto moto1;
    moto1.velocidad = moto1.fast();
    moto1.mostrar();
    cout << "Introduzca la velocidad que desea aumentar :"
<< endl;
cin >> aumento;

cout << "La nueva velocidad es :"<< moto1.cremento(aumento) << "\n";

}