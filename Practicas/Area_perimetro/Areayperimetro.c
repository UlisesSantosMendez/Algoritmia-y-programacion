/*Desarrollar un algoritmo para calcular el área y perímetro de las siguientes
figuras: círculo, cuadrado, pentágono, triángulo y que tenga la opción de salir
en caso de seleccionar una opción que no se encuentre en el menú*/
#include<stdio.h>
#include<math.h>
#define PI 3.1415169
int main(void){
	float lado,radio,apotema,Percirc=0,Arcirc=0,Percuad=0,Arcuad=0,Perpent=0,Arpent=0,Pertrian=0,Altura=0,Artrian=0;
	int option;
	printf("PROGRAMA PARA DETERMINAR EL AREA Y PERIMETRO DE FIGURAS GEOMETRICAS\n");
	printf("MENU\n");
	printf("1.- Circulo\n");
	printf("2.- Cuadrado\n");
	printf("3.- Pentagono\n");
	printf("4.- Triangulo\n");
	printf("Seleccione el numero de la figura a calcular:");
	scanf("%d",&option);
	switch(option){
		case 1:
			printf("Opcion para calcular area y perimetro del circulo\n");
			printf("Ingresa el valor del radio del circulo:");
			scanf("%f",&radio);
			Percirc=2*PI*radio;
			Arcirc=PI*pow(radio,2);
			printf("El perimetro del circulo es:%f",Percirc);
			printf("\nEl area del circulo es:%f",Arcirc);
			break;
		case 2:
			printf("Opcion para calcular el area y perimetro del cuadrado\n");
			printf("Ingresa el valor del lado del cuadrado:\n");
			scanf("%f",&lado);
			Percuad=4*lado;
			Arcuad=pow(lado,2);
			printf("El perimetro del cuadrado es:%f",Percuad);
			printf("\nEl area del cuadrado es:%f",Arcuad);
			break;
		case 3:
			printf("Opcion para calcular el area y perimetro del pentagono\n");
			printf("Ingresa el valor del lado del pentagono:\n");
			scanf("%f",&lado);
			Perpent=5*lado;
			printf("El perimetro del pentagono es:%f",Perpent);
			printf("\nIngresa el valor del apotema del pentagono:");
			scanf("%f",&apotema);
			Arpent=Perpent*apotema/2;
			printf("\nEl area del pentagono es:%f",Arpent);
			break;
		case 4:
			printf("Opcion para calcular area y perimetro del triangulo\n");
			printf("Ingresa el valor del lado de tu triangulo:\n");
			scanf("%f",&lado);
			Pertrian=3*lado;
			printf("\nEl perimetro del triangulo es:%f",Pertrian);
			Altura=sqrt(pow(lado,2)-pow((lado / 2),2));
			Artrian =lado * Altura / 2;
			printf("\nEl area del triangulo es:%f",Artrian);		
			break;
		default:printf("Salir");
				break;	
			
	}
	return 0;
}
