#include  <stdio.h>
#include  <math.h>

using namespace std;

int sumaycambio(int &a ,int &b ){
    int result,c;
    result=a+b;
c=a;
a=b;
b =c;
    return result;
}
int main() {
    int a, b;
    printf("Por favor ingrese valor de N1: \n");
    scanf("%d", &a);
    printf("Por favor ingrese valor de N2: \n");
    scanf("%d", &b);

    printf("***************************\n El resultado de la suma es: %d\n", sumaycambio(a,b));
    printf("El valor de N1 es: %d\n", a);
    printf("El valor de N2 es: %d\n", b);

    return 0;
}