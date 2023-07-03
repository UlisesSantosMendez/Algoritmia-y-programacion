/*
Llenar un arreglo de caracteres con el usuario sin exceder una dimension de 50 caracteres
contar cantidad de palabras entendiendo que una palabra esta separada por un caracter de
espacio con otra palabra, contar las vocales de la cadena y definir la totalidad de lineas
y eliminar la segunda palabra
*/
#include<stdio.h>
#include<string.h>
int main(void){
	char words[50];
	char *vows[5];
	vows*[0]='a';
	vows*[1]='e';
	vows*[2]='i';
	vows*[3]='o';
	vows*[4]='u';
	int i=0,contw=1,contl=0;
	printf("\t\t\t*****PALABRAS Y VOCALES*****");
	printf("\nIngrese una oracion:\n");
	fgets(words,50,stdin);
	for(i=0;i<words[50];i++){
		if( words[i]==' ' &&i>0 && words[i-1]!=' '){
			
			contw++;	
		}
		if(words[i]=='a'|words[i]=='e'|words[i]=='i'|words[i]=='o'|words[i]=='u'){
			contl++;
			
		}
		if(strcmp(words[i],vows*[0])==0){
			printf("%s",vows[0]);
			
			
			
			
		}
		
		
	}
	
	printf("Tu oracion tiene %d palabras",contw);	
	printf("\nLa cantidad total de vocales que tienes es:%d",contl);
	

	return 0;
}

//char vocales(char a, char b){
//	char vows[50];
//	for(){
		
//	}
	
	
	
	
	
//}
