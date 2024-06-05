#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void pro_and(vector<int> binan1, vector<int> binan2, vector<int> &r_and)
{

  
            for (int i = 8; i >= 0; i--)
            {
                if (binan1[i] == 1 && binan2[i] == 1)
                {
                    r_and[i] = 1;
                }
                else
                {
                    r_and[i] = 0;
                }
            }
}

void pro_or(vector<int> binan1, vector<int> binan2, vector<int> &r_or)
{

   
        
       
            for (int i = 8; i >= 0; i--)
            {
                if (binan1[i] == 1 || binan2[i] == 1)
                {
                    r_or[1] = 1;
                }
                else
                {
                    r_or[1] = 0;
                }
            }
        
    
}

int main()
{
    int n1, n2;
    vector<int> binan1;
    vector<int> binan2;
    vector<int> r_and(8);
    vector<int> r_or(8);
    cout << "por favor ingresar numero1 dentre 0-255:\n";
    cin >> n1;
    cout << "por favor ingresar numero2 dentre 0-255:\n";
    cin >> n2;
    cout << "******************************************************\n";
    cout << "******************************************************\n";

    cout << "el codigo ascii para el numero 1 es:" << char(n1) << "\n";
    cout << "el codigo ascii para el numero 2 es:" << char(n2) << "\n";

    for (int i = 0; i < 8; i++)
    {
        binan1.push_back(n1 % 2);
        n1 = n1 / 2;
    }

    for (int i = 0; i < 8; i++)
    {
        binan2.push_back(n2 % 2);
        n2 = n2 / 2;
    }

    cout << "el numero dinario para  numero 1 es:";
    for (int i = 8; i >= 0; i--)
    {
        cout << binan1[i];
    }
    cout << "\n";
    cout << "el numero dinario para  numero 2 es:";
    for (int i = 8; i >= 0; i--)
    {
        cout << binan2[i];
    }
    cout << "\n";

    pro_and(binan1, binan2, r_and);
    pro_or(binan1, binan2, r_or);

    cout << "La funcion AND es :";

    for (int i = 8; i >= 0; i--)
    {
        cout << r_and[i];
    }
    cout << "\n";

    cout << "La funcion OR es  :";

    for (int i = 8; i >= 0; i--)
    {
        cout << r_or[i];
    }
    cout << "\n";
}
