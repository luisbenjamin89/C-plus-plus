#include <stdio.h>
#include <iostream>

using namespace std;

string validacion(string cadena)
{
    string msj;

    if (cadena.length() < 8)
    {
        msj = "La contraseña debe de tener 8 caracteres como minimo";
        return msj;
    }

    for (int i = 0; i < cadena.length(); i++)
    {

        if ((int(cadena[i]) >= 65 && int(cadena[i]) <= 90) || (int(cadena[i]) >= 48 && int(cadena[i]) <= 57))
        {
            msj = "el password es valido";
            return msj;
        }

     
       
    }
    msj = "el password no es valido";
    return msj;
}
int main()
{
    string cadena;

    cout << "por favor ingrese password: \n";
    cin >> cadena;

    cout << validacion(cadena) << endl;
}