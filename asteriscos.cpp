#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

int i,j,rep;

    cout << "Introduzca repeticiones: ";
    cin >> rep;
    i=1;   
    while (i<rep+1)
    {
        j=1;
        while (j<i+1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}