#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

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

        datos[i].nombre_a = nombres[i];
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
        datos[alumno - 1].teoría = nota;
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
        datos[alumno - 1].problemas = nota;
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
        datos[alumno - 1].prácticas = nota;
        cout << "**********************************************\n";
        cout << "**************La Nota fue actulizada**********\n";
        cout << "**********************************************\n";
        cout << "\n";
    }
}
void merjornota(vector<notas> datos)
{
    int notateoria = 0;
    int notaproblemas = 0;
    int notapracticas = 0;

    for (int i = 0; i < 10; i++)
    {
        if (datos[i].teoría > notateoria)
        {

            notateoria = datos[i].teoría;
        }
        if (datos[i].problemas > notaproblemas)
        {
            notaproblemas = datos[i].problemas;
        }

        if (datos[i].prácticas > notapracticas)
        {
            notapracticas = datos[i].prácticas;
        }
    }
    cout << "\n";
    cout << "La mejor nota de teoria es: " << notateoria << endl;
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        if (datos[i].teoría == notateoria)
        {

            cout << "-----------------------------------------\n";
            cout << "*******" << datos[i].nombre_a << "*******\n";
            cout << "-----------------------------------------\n";
        }
    }
    cout << "\n";
    cout << "La mejor nota de problemas es: " << notaproblemas << endl;
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        if (datos[i].problemas == notaproblemas)
        {
            cout << "-----------------------------------------\n";
            cout << "*******" << datos[i].nombre_a << "*******\n";
            cout << "-----------------------------------------\n";
        }
    }
    cout << "\n";
    cout << "La mejor nota de practicas es: " << notapracticas << endl;
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        if (datos[i].prácticas == notapracticas)
        {
            cout << "-----------------------------------------\n";
            cout << "*******" << datos[i].nombre_a << "*******\n";
            cout << "-----------------------------------------\n";
        }
    }
}
void submenu(vector<int> identificacion, vector<notas> datos, vector<string> nombres)
{
    int menu;
    void menuprincipal(vector<int> & identificacion, vector<notas> datos, vector<string> nombres);

    cout << "\n";
    cout << "     SUBMENU DE ESTADISTICAS\n";
    cout << "********************************\n";
    cout << "********************************\n";

    cout << "1.- Alumnos con mejores notas.\n";
    cout << "2.- Ver nota media de un alumno.\n";
    cout << "3.- Ver los alumnos con alguna parte suspensa.\n";
    cout << "4.- Ver el numero de alumnos con suspensos por cada grupo.\n";
    cout << "\n";
    cout << "Seleccione una opcion (Pulsar 0 para volver al menu princial):\n";
    cin >> menu;

    switch (menu)
    {
    case 0:
        system("clear");
        menuprincipal(identificacion, datos, nombres);
        break;

    case 1:
        system("clear");
        merjornota(datos);
        cout << "\n";
        cout << "**********************************************\n";
        cout << "**************Fin De Resultados***************\n";
        cout << "**********************************************\n";
        cout << "\n";
        submenu(identificacion, datos, nombres);
        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    default:
        submenu(identificacion, datos, nombres);
        break;
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
        system("clear");
        modificar(datos);
        menuprincipal(identificacion, datos, nombres);
        break;
    case 4:
        system("clear");
        submenu(identificacion, datos, nombres);
        break;
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