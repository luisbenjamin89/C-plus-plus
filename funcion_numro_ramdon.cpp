#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

struct cordenada
{
    int x;
    int y;
};

int random_n()
{
    int n;

    n = 1 + rand() % 50;
    return n;
}

void metodo(vector<cordenada> cordena)
{
    for (int i = 0; i < cordena.size(); i++)
    {
        cout << "la coordenada de x :" << cordena[i].x << "\n";
        cout << "la coordenada de y :" << cordena[i].y << "\n";
        cout << "\n";
    }
}

void calculos(vector<cordenada> cordena)
{
    int sumax=0;
    int sumay=0;
    int mediay;
    for (int i = 0; i < cordena.size(); i++)
    {

        sumax += cordena[i].x;
        sumay += cordena[i].y;
        
    }
    mediay = sumay / cordena.size();
    cout << "la suma de las coordenaadas x es:" << sumax << "\n";
    cout << "la media de las coordenadas  y es :" << mediay << "\n";
    cout << "\n";
}
int main()
{
    srand(time(0));
    int limite;

    cout << "Escribe el tamaño del array con el que desea trabajar:\n";
    cin >> limite;
    vector<cordenada> cordena(limite);

    for (int i = 0; i < cordena.size(); i++)
    {

        cordena[i].x = random_n();
        cordena[i].y = random_n();
    }

    metodo(cordena);
    calculos(cordena);

    return 0;
}