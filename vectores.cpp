#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> alumnos(5);
    alumnos = {1, 45, 226, 13, 5};

    for (int i = 0; i < alumnos.size(); i++)
    {
        cout << "loa alumnos del grupo" << i << "son :" << alumnos[i] << "\n";
    }
}