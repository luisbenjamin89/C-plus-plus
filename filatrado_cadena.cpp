#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string c;

    cout <<"Introdusca una cadena para desclozar: ";
    cin >> c;

    for (int i = 0; i <= c.size(); i++)
    {

        cout   << c[i] << "\n";
    }

    return 0;
}