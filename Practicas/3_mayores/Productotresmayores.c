/*
Deberemos de solicitar al usuario uno a uno numeros enteros a partir del tercer numero
recibido preguntaremos si es el ultimo numero a recibir.
Al finalizar deberemos de mostrar el producto de los tres numeros mayores recibidos.
Sin utilizar arreglos.
Definimos nuestras variables
*/
#include<stdio.h>
int main(void){
	int num1,num2,num3,res=0;
	int conta=1;
	int numx=1;
	char r[5];
	
	printf("Programa que multiplica los tres digitos mayores\n");
	do{

		printf("Ingresa el numero %d:",conta);
			if(conta==1){
				scanf("%d",&num1);	
			}
			else{
				if(conta==2){
					scanf("%d",&num2);
				}
				else{
					scanf("%d",&num3);
				}
	
			}
			conta=conta+1;
	}
	while(conta<=3);
	printf("%d\t%d\t%d",num1,num2,num3);

	do{
		printf("\n¿Quieres agregar otro numero? (s/n)\n");
		scanf("%s",&r);
		if(r[0]!='n'){
			printf("Ingresa el numero %d: ",conta);
			scanf("%d",&numx);
			conta=conta+1;
			
			if(num1<num2 && num1<num3){
				num1=numx;
			}
			else{
				if(num2<num1 && num2<num3){
					num2=numx;	
				}
				else{
					if(num3<num1 && num3<num2){
						num3=numx;
					}
					else{
						if(num1==num2){
							num1=numx;
						}
						else{
							if(num1==num3){
								num1=numx;
							}
							else{
								if(num2==num3){
									num2=numx;
								}
								else{
									num1=numx;
									num2=numx;
									num3=numx;
								}
								
							}
							
						}
						
					}
					
				}
				
			}
			
		}
		
	}
	while(r[0]=='s');
	res=num1*num2*num3;
	printf("La multiplicacion de los tres numeros mayores es:%d",res);
	return 0;	
}




























