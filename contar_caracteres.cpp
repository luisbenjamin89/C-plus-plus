#include <stdio.h>
#include <string.h>
#include <iostream>

int cont = 0;

using namespace std;
int main()
{
    char c;
    int cont = 0;
   string cadena;
    printf("introduzca una cadena : \n");
    do
    {
        c = getchar();
       if (c != '\n')
        {
        cadena += c;
        cont++;
        }
     
    } while (c != '\n');
    {
        printf("la cadena %s  tiene %d caracteres \n", cadena, cont);
    }

    return 0;
}