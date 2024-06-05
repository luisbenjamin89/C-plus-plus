#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
struct alumno{
string nombre;
string apellido;
int edad;
int califiacion;
};

int main(){

alumno estudiante;

cout << "Ingrese el nombre del estudiante: ";
cin >> estudiante.nombre;
cout << "Ingrese el apellido del estudiante: ";
cin >> estudiante.apellido;
cout << "Ingrese la edad del estudiante: ";
cin >> estudiante.edad;
cout << "Ingrese la calificacion del estudiante: ";
cin >> estudiante.califiacion;

cout << "**************************************** \n" ;
cout << "**************************************** \n" ;
cout << "El nombre del estudiante es: " << estudiante.nombre << endl;
cout << "El apellido del estudiante es: " << estudiante.apellido << endl;
cout << "La edad del estudiante es: " << estudiante.edad << endl;
cout << "La calificacion del estudiante es: " << estudiante.califiacion << endl;

}