#include <iostream>

using namespace std;

class Boli
{
public:
 string color;
/*creando un constructor con el valor de atributo pre cargado*/
Boli()
{
    color = "blue";
}
};

int main(){
    Boli b1;
    cout <<"El color del boligrafo es :"<< b1.color << "\n";
    return 0;
}