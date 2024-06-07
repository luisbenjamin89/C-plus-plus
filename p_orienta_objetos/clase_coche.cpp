#include <iostream>

 using namespace std;

class Coche
{
    public:
        string matricula = "3744EK";
        int velocidad;
        int combustible;
    void mensaje()
    {
        cout <<"Saludos desde dentro de mi coche."<<endl;
    } 
};
int main(void)
{
    system("clear");
    Coche miCoche;
    miCoche.combustible = 30;
    miCoche.velocidad = 120;
    miCoche.mensaje();
    cout << "Datos coche: " << miCoche.matricula << ", " << miCoche.velocidad << ", " << miCoche.combustible << endl ;
}