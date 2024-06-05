#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>

int random_n()
{
    int n;

    n = 1 + rand() % 3;
    return n;
}

using namespace std;
struct notas
{
    string nombre_a;
    int NumAlumno;
    string Grupo;
    int teoría;
    int problemas;
    int prácticas;
};

void mostrar(vector<int> identificacion, vector<notas> &datos, vector<string> nombres)
{
    string grupo;
    string numero;

    for (int i = 0; i < 10; i++)
    {
        grupo = "GInf" + to_string(random_n());

        datos[i].nombre_a = nombres[i] ;
        datos[i].NumAlumno = identificacion[i];
        datos[i].Grupo = grupo;
        datos[i].teoría = random_n();
        datos[i].problemas = random_n();
        datos[i].prácticas = random_n();

        cout << "-----------------------------------------\n";
        cout << "-----------------------------------------\n";
        cout << "*******" << datos[i].nombre_a << "*******\n";
        cout << "-----------------------------------------\n";
        cout << "-----------------------------------------\n";
        cout << "EL alumno numero :" << datos[i].NumAlumno << endl;
        cout << "EL Grupo :" << datos[i].Grupo << endl;
        cout << "La nota de Teoria :" << datos[i].teoría << endl;
        cout << "La nota de Problemas :" << datos[i].problemas << endl;
        cout << "La nota de Practicas:" << datos[i].prácticas << endl;
        cout << "\n";
    }
}

void modificar(vector<notas> &datos)
{
    int nota;
    int alumno;
    string notas;

    cout << "Introduzca el numero de alumno que desea modificar: ";
    cin >> alumno;

    /*Modifi que el programa para que se pueda escojer la nota a modificar*/

    cout << "Introduzca el nombre de la nota que desea modificar (teoría,problemas,practicas) :";
    cin >> notas;

    if (notas == "teoria")
    {
        cout << "La nota actual de teoria es:";
        cout << datos[alumno - 1].teoría << endl;
        cout << "Introduzca la nueva nota:";
        cin >> nota;
        datos[alumno- 1].teoría = nota;
        cout << "**********************************************\n";
        cout << "**************La Nota fue actulizada**********\n";
        cout << "**********************************************\n";
        cout << "\n";
    }
    if (notas == "problemas")
    {
        cout << "La nota actual de problemas es:";
        cout << datos[alumno - 1].problemas << endl;
        cout << "Introduzca la nueva nota:";
        cin >> nota;
        datos[alumno- 1].problemas = nota;
        cout << "**********************************************\n";
        cout << "**************La Nota fue actulizada**********\n";
        cout << "**********************************************\n";
        cout << "\n";
    }
    if (notas == "practicas")
    {
        cout << "La nota actual de prácticas es:";
        cout << datos[alumno - 1].prácticas << endl;
        cout << "Introduzca la nueva nota:";
        cin >> nota;
        datos[alumno- 1].prácticas = nota;
        cout << "**********************************************\n";
        cout << "**************La Nota fue actulizada**********\n";
        cout << "**********************************************\n";
        cout << "\n";
    }
}

void menuprincipal(vector<int> &identificacion, vector<notas> datos, vector<string> nombres)
{
    int menu;

    cout << "\n";
    cout << "       MENU PRINCIPAL\n";
    cout << "********************************\n";
    cout << "********************************\n";

    cout << "1.- Carga de datos en el array.\n";
    cout << "2.- Ver los datos cargados.\n";
    cout << "3.- Modificar una nota de practicas.\n";
    cout << "4.- Ver estadisticas.\n";
    cout << "\n";
    cout << "Seleccione una opcion (Pulsar 0 para salir):\n";
    cin >> menu;

    switch (menu)
    {
    case 0:
        cout << "Usted ha salido del programa , Adios \n";
        exit;
        break;

    case 1:
        system("clear");
        for (int i = 0; i < 10; i++)
        {
            cout << "Introduzca numero de identificacion para el alumno" << i + 1 << ":";
            cin >> identificacion[i];
        }
        system("clear");
        cout << "\n";
        cout << "**********************************************\n";
        cout << "********Los Datos fueron ingresados***********\n";
        cout << "**********************************************\n";
        cout << "\n";

        menuprincipal(identificacion, datos, nombres);
        break;
    case 2:
        system("clear");
        mostrar(identificacion, datos, nombres);
        cout << "**********************************************\n";
        cout << "**************Fin De Resultados***************\n";
        cout << "**********************************************\n";

        menuprincipal(identificacion, datos, nombres);
        break;
    case 3:
        modificar(datos);
        menuprincipal(identificacion, datos, nombres);
        break;
    case 4:;

    default:
        menuprincipal(identificacion, datos, nombres);
        break;
    }
}

int main()
{
    srand(time(0));

    vector<notas> datos(10);
    vector<string> nombres(10);
    vector<int> identificacion(10);

    nombres = {"luis Gutierrez", "Aurora Perdigones", "Karen Morales", "Pepe Gonzales", "Jonny Pacheco", "Marlene Aburto", "Rene Gutierrez", "Joselyn Acosta", "Anna acosta", "Junanito Maraña"};

    menuprincipal(identificacion, datos, nombres);

    return 0;
}