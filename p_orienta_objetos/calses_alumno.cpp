#include <iostream>

using namespace std;

class Alumno
{
public:

string nombre;
int Nidentifi;
string estudio;
int curso;
/*creando un constructor con el valor de atributo pre cargado*/
Alumno()
{
    cout<<"Introdusca nombre del alumno: \n";
    cin>>nombre;
    cout<<"Introdusca numero de identificacion del alumno: \n";
    cin>>Nidentifi;
    cout<<"Introdusca estudio del alumno: \n";
    cin>>estudio;
    cout<<"Introdusca curso del alumno: \n";
    cin>>curso;
}
void mostrar();
};

void Alumno::mostrar(){

 cout<<"El nombre del Alumno es :"<<nombre;
 cout<<"El numero de identificacion del Alumno es :"<<Nidentifi;
 cout<<"El estudio del Alumno es :"<<estudio;
 cout<<"El curso del Alumno es :"<<curso;

};
int main(){
    Alumno alumno1;
    alumno1.mostrar();
    return 0;
}