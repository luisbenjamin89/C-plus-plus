#include <iostream>
#include <vector>

using namespace std;

class Array
{
public:
    vector<int> arr;
    int size;

    void metodocarga(int siz,vector<int> &arr);
    void metodoimprimir(int size,vector<int> arr);

};


void Array::metodocarga(int size,vector<int> &arr)
{

for(int i=0;i<size;i++){
    cout << "introduce un numero para posicion "<< i+1 << ":";
    cin >> arr[i];
}
}

void Array::metodoimprimir(int size,vector<int> arr){

    for(int i=0;i<size;i++){
        cout <<"EL numero guardado en la posicion "<<i+1 << "es : " << arr[i]<<"\n";
    }
}


int main(){
    Array a;
    cout << "introduce el tamaño del array con el que deseas trabajar :";
    cin >> a.size;
    vector<int> arr(a.size);
    a.metodocarga(a.size,arr);
    a.metodoimprimir(a.size,arr);
    return 0;
}