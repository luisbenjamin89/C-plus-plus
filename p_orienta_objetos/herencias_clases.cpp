#include <vector>
#include <iostream>
using namespace std;

class Persona
{
public:
string nombre;
int edad;

Persona(string nombre, int edad){

    nombre = nombre;
    edad = edad;
}

};

class Estudiante:public Persona{
    public:

    string nia;
    int curso;

    Estudiante(string nombre, int edad, string nia, int curso):Persona(nombre, edad){

        nia = nia;
        curso = curso;
        nombre = nombre;
        edad = edad;
    }
};

int main(){
    Estudiante estudiante("Juan", 20, "123456789", 1);
    cout << estudiante.nombre << endl;
    cout << estudiante.edad << endl;
    cout << estudiante.nia << endl;
    cout << estudiante.curso << endl;
    return 0;
}