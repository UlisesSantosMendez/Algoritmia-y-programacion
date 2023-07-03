/*sistema de 2x2 en determinantes utilizando un arreglo bidimensional, llenar dicho arreglo 
 solicitando al usuario dicha informacion  x1  y1  r1  ;  x2  y2  r2*/
#include <stdio.h>
int main(void){   
//Declaramos nuestro arreglo bidimensional
   float miArr[2][3];
//Declaramos nuestras variables tipo Real
   float d,x,y;
   printf("Solucion a Sistema de Ecuaciones por Determinantes \n");
   //Utilizando un arreglo bidimensional llenar dicho arreglo solicitando valores al usuario
   printf("\n");
   printf("Introduce el valor de x1: \n");
   scanf("%f",& miArr[0][0]);

   printf("Introduce el valor de x2: \n");
   scanf("%f",& miArr[1][0]);

   printf("Introduce el valor de y1: \n");
   scanf("%f",& miArr[0][1]);

   printf("Introduce el valor de y2: \n");
   scanf("%f",& miArr[1][1]);

   printf("Introduce el valor de r1: \n");
   scanf("%f",& miArr[0][2]);

   printf("Introduce el valor de r2: \n");
   scanf("%f",& miArr[1][2]);

//Acomodamos nuestro arreglo para que se pueda visualizar en orden
   printf("\n");

   printf("%f \t%f \t%f", miArr[0][1], miArr[0][1],miArr[0][2]);
   printf("\n");
   printf("%f \t%f \t%f", miArr[1][0], miArr[1][1],miArr[1][2]);
   
   printf("\n");

   d=(miArr[0][0]*miArr[1][1]-miArr[1][0]*miArr[0][1]);
   x=((miArr[0][2]*miArr[1][1]-miArr[1][2]*miArr[0][1]))/d;
   y=((miArr[0][0]*miArr[1][2]-miArr[1][0]*miArr[0][2]))/d;
//Colocamos los resultados de cada valor calculado
   printf("\n");
   printf("Resultados:\n");
   printf("Determinante:%f\n",d);
   printf("X:%f\n",x);
    printf("Y:%f",y);
   return 0;
}
