#include <iostream>
#include <vector>

using namespace std;

class Moto
{
public:
 

 string nombre;
int velocida;

    void metodocargamoto( vector <Moto>&motos1);
    void ver(vector <Moto>motos1);
    int fast();

};
int Moto::fast(){
     int n;

    n =  rand() %200;
    return n;

};

void Moto::metodocargamoto(vector<Moto> &motos1) {
    for (int i = 0; i < motos1.size(); i++) {
        nombre = "moto_" + to_string(i + 1);
        velocida = rand() % 200;
        motos1[i].nombre = nombre;
        motos1[i].velocida = velocida;
    }
}


void Moto::ver(vector <Moto>motos1){
for(int i=0;i<motos1.size();i++)
{
    cout<<"La moto con nombre :"<<motos1[i].nombre<<endl;
    cout<<"Va a una velocidad de :"<<motos1[i].velocida<<" km"<<endl;
    cout<<"\n";
}

}




int main(){
  Moto moto1;
  vector <Moto>motos1(100);
     srand(time(0));
 
 moto1.metodocargamoto(motos1);
 moto1.ver(motos1);
}