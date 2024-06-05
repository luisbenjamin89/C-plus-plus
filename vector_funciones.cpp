#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

float promedio(vector<int> notas)
{
    float resultado;
    int suma = 0;

for (int i =0; i< notas.size();i++)
{
suma += notas[i];
}
resultado = suma/3;

    return resultado;
}
int main (){

    vector<int> notas(3);

    for (int i=0; i < notas.size(); i++)
    {

        cout << "digite el valor del array para posicion" << i<<": ";
        cin >> notas[i];
     
    }
    cout << "El promedio de las tres notas es : "<<promedio(notas) << endl;

    return 0;
}