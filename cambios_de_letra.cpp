#include <stdio.h>
#include <iostream>

using namespace std;

string cambio(string cadena)
{
    

    for (int i = 0; i < cadena.length(); i++)
    {

        switch (cadena[i]) // donde opción es la variable a comparar
        {
        case 'a':
            cadena[i] = 'e';
            break;
        case 'e':
            cadena[i] = 'i';
            break;
        case 'i':
            cadena[i] = 'o';
            break;
        case 'o':
            cadena[i] = 'u';
            break;
             case 'u':
            cadena[i] = 'a';
            break;
       
        }
    }

    return cadena;
}

int main()
{
    string cadena;

    cout << "por favor ingrese una cadena: \n";
    cin >> cadena;

    cout << "la cadena es: " << cambio(cadena) << endl;

    return 0;
}