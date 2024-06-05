#include <stdio.h>
#include <math.h>


int main() {

int n;
printf("Digite um numero: ");
scanf("%d", &n);
if (n%2==0) {
    printf("el numero %d e par \n", n);
}
else {
    printf("el numero %d e impar \n", n);
}
return 0;
}
