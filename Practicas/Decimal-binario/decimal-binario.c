/* El siguiente algoritmo permite convertir un número entero dado por el usuario X10 en su correspondiente X2
utilizando divisiones con el seguimiento dde la estructura vista en clase */
#include<stdio.h>
#include<math.h>
int main(void){
//Declaramos variables para nuestro programa 
	int memoria=0,mod,conta,dec;
//Definimos el propósito de nuestro programa
	printf("PROGRAMA CONVERTIDOR DE BINARIO A DECIMAL\n");
//Solicitamos al usuario un numero base 10
	printf("Ingrese un numero decimal:\n");
//Se lee el dato ingresado por el usuario
	scanf("%i",&dec);
//Ciclo de repetición para nuestra conversion de minutos
	while (dec>0){
//Obtenemos el residuo de la division de nuestro dato
	mod = dec%2;
//Guardamos en memoria la multiplicación de nuestro dato	
	memoria = memoria+mod*conta;
	dec = (int)(dec/2);
	conta = conta*10;
//Imprimimos nuestro dato en pantalla
	printf("\n%i %i\n",dec,mod);
	}
//Ordenamos nuestros residuos
	printf("\nNumero Binario: %i\n",memoria);
	return 0;
}

