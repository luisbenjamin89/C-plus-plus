#include <stdio.h>
#include <iostream>



using namespace std;

int main() {
int cont = 0;
int total = 0; 
string c  ;
cout << "por favor digite una palabra : \n";
cin >> c;


for (int i = 0; i < c.length(); i++) {
if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U') {
cont = cont + 1;
total += c[i];
}

}
cout << "la palabra " << c << " tiene " << cont << " vocales " << "El total de la suma assci de las vocales es :" <<total << endl;
cont = 0;


return 0;

}

