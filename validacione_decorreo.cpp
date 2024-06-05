#include <stdio.h>
#include <iostream>

using namespace std;

string validacion(string cadena)
{
    string msj;

    for (int i = 0; i < cadena.length(); i++)
    {

        if (cadena[i] == '@' )
        {
            msj = "el correo es valido";
            return msj;
        } 

     
    }
    msj = "el correo no es valido";
   return msj;
}
int main()
{
    string cadena;

    cout << "por favor ingrese una cadena: \n";
    cin >> cadena;

    cout << validacion(cadena) << endl;

    return 0;
}