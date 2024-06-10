#include <iostream>

using namespace std;

class Barco
{
public:
 int potencia1;
 int potencia2;
 int peso;
  void intro();   
float calculo();
};

void Barco:: intro(){

    cout<<"Ingrese la potencia del motor 1: ";
    cin>>potencia1;
    cout<<"Ingrese la potencia del motor 2: ";
    cin>>potencia2;
    cout<<"Ingrese el peso del barco: ";
    cin>>peso;


};

float Barco::calculo() {
    float resultado=0;

resultado = (potencia1*potencia2)/(peso*0.17);

    return resultado;
}

int main(){
    Barco barco1;
    barco1.intro();
    cout<<"el resultado es "<<barco1.calculo()<<endl;
    return 0;

    return 0;
}