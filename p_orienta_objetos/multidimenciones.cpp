#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;


int random_notas()
{
    int n;

    n = 1 + rand() % 9;
    return n;
}
void llenar( vector <vector <int>> &MAB1){
   
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            MAB1[i][j] = random_notas();
        }
    }

}

void mostrar(vector <vector <int>> MAB1){
    
system("clear");
cout <<"--------------------------\n";
cout <<"Matriz de inicio 10 x10 : \n";
cout <<"--------------------------\n";

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cout << MAB1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";

}

int main(){
 srand(time(NULL));
    vector <vector <int>> MAB1 (9,vector <int>(10));

llenar(MAB1);
mostrar(MAB1);

}