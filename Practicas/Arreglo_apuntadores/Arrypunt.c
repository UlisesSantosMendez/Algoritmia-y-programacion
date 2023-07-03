/*
Utilizando el puntero y un arreglo bidimensional solicitar al usuario 
que llene dicho arreglo y al final se imprima
*/

#include<stdio.h>
int main(void){
	int arr[2][3];
	int* p;
	p=&arr;
	
	int conta=1;
	
	printf("\t\t\t****ARREGLOS Y PUNTEROS****");
	do{
		printf("\nIngresa el numero %d:",conta);
		if(conta==1){
			scanf("%d",&arr[0][0]);
		}
		else{
			if(conta==2){
				scanf("%d",&arr[0][1]);
			}
			else{
				if(conta==3){
					scanf("%d",&arr[0][2]);
				}
				else{
					if(conta==4){
						scanf("%d",&arr[1][0]);
					}
					else{
						if(conta==5){
							scanf("%d",&arr[1][1]);
						}
						else{
							if(conta==6){
								scanf("%d",&arr[1][2]);
							}
						}
					}
				}
			}
		}
		
		conta=conta+1;
	}
	while(conta<=6);
	
	printf("Los datos en tu arreglo son: %d,%d,%d,%d,%d,%d",*p);
	
	return 0;
}

