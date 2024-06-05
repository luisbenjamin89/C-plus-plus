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

 alumno listaAlumnos[3];
for(int i=0;i < 3;i++)
{
cout << "Ingrese datos del Estudiante " <<i << "\n ";
cout << "Ingrese el nombre del estudiante : \n ";
cin >> listaAlumnos[i].nombre;
cout << "Ingrese el apellido del estudiante: \n";
cin >> listaAlumnos[i].apellido;
cout << "Ingrese la edad del estudiante: \n";
cin >> listaAlumnos[i].edad;
cout << "Ingrese la calificacion del estudiante: \n";
cin >> listaAlumnos[i].califiacion;
}

for(int j;j< 3;j++)
{
cout << "**************************************** \n" ;
cout << "**************************************** \n" ;
cout << "El nombre del estudiante es: " << listaAlumnos[j].nombre << endl;
cout << "El apellido del estudiante es: " << listaAlumnos[j].apellido << endl;
cout << "La edad del estudiante es: " << listaAlumnos[j].edad << endl;
cout << "La calificacion del estudiante es: " << listaAlumnos[j].califiacion << endl;
}
}