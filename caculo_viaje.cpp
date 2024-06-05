#include  <stdio.h>

using namespace std;

void caculo_precio(int km, float precio,float &total){
total = km *precio;

}

float descuento ( float total,int km){
    float descuento;
    if (km < 300 ){
    descuento = total * 0.10;
    return descuento;
    } 
  if (km > 300){
     descuento = total * 0.20;
     return descuento;
   };
}

int main(){
    int km;
    float precio,total;

printf("ingrese la disctancia en kilometros :");
scanf("%d",&km);
printf("ingrese el precio por kilometro:");
scanf("%f",&precio);
 
 caculo_precio (km,precio,total);
 descuento(total,km);
printf(" ********************* \n El precio parcial es : %f \n el descuento es: %f  \n  El precio total a pagar es: %f  \n",total, descuento(total,km),total- descuento(total,km) );
return 0;
}