/*
Mis primeros apuntadores
El siguiente programa utilizar� una funci�n que recibir� como par�metro dos punteros de tipo entero, dentro de dicha funcio�n que llamaremos intercambiando .
Utilizaremos los punteros recibidos y una variable de memoria temporal para hacer el intercambio de los valores de las variables apuntadas.
Se deber� imprimir las variables originales, el intercambio de los valores en la funci�n y el intercambio de los valores fuera de la funci�n. 
*/
#include<stdio.h>
//Prototipado
void intercambiando(int *a,int *b);
int main(){
	int v1=0,v2=0 ,*m1,*m2;
	printf("MIS PRIMEROS APUNTADORES\n");
	printf("Ingrese su primer valor:\n");
	scanf("%d",&v1);
	printf("Ingrese su segundo valor:\n");
	scanf("%d",&v2);
	m1=&v1;
	m2=&v2;
	printf("Tus variables son:%d\t%d",v1,v2);
	intercambiando(m1, m2);
	printf("Tus variables originales son:%d\t%d",v1,v2);
}

void intercambiando(int *a,int *b){
	int mem=*a;
	
	*a=*b;
	*b=mem;
	printf("El intecambio de tus variables es:%d\t%d",*a,*b);
}










