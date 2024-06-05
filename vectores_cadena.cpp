#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<string> cadenas(3);

    for (int i; i < cadenas.size(); i++)
    {

        cout << "digite el valor del array para posicion" << i<<": ";
        cin >> cadenas[i];
     
    }

cout << "*********************************************** \n";

       for (int j; j < cadenas.size(); j++)
        {
            cout <<"Los datos introducidos para la poscion "<<j <<"son :" << cadenas[j] << endl;
        }
}