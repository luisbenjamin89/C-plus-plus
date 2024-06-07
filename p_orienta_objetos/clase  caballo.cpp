#include <iostream>

using namespace std;

class Caballo
{
public:
    string nombre;
    int k_comida;

    void lest_food(int &k_comida)
    {
        string letra;
        do
        {

            cout << "la comida del caballo es " << k_comida << " k si desea disminuir en 1k presionele letra  's' si  no letra 'f'" << endl;
            cin >> letra;

            if (letra == "s")
            {
                k_comida = k_comida - 1;
                
            }

        } while (letra != "f");

        cout << "la comida del caballo ingerida es :" << k_comida << " k" << endl;
    }
};

int main()
{
    Caballo caballo;
    caballo.k_comida = 30;
    caballo.lest_food(caballo.k_comida);
}
