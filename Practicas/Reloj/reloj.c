/*El siguiente algoritmo muestra en pantalla el funcionamiento de un reloj digital con el siguiente formato
(una sola lìnea), hh:mm:ss
Opciòn de configurar 1 alarma emitiendo un mensaje ¡¡Alarma pràctica terminada!!*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


int main(void){
int hr,min,seg,hr2,min2,seg2,alarm;
char opc,hr1,min1,seg1;

printf("El siguiente programa es sobre un reloj");
hr=1;
min=59;
seg=50;
hr2=0;
min2=0;
seg2=1;

printf("\n\nConfigura la alarma");
printf("\nIngresa la hora ");
scanf("%d",&hr2);
printf("\nIngresa los minutos ");
scanf("%d",&min2);
printf("\nIngresa los segundos ");
scanf("%d",&seg2);
alarm=20;


if(seg2>0){
    seg2=seg2-1;
}

do{
if(seg>59){
    min=min+1;
    seg=0;
}else {
    if(min>59){
    hr=hr+1;
    min=0;
    }
    else{
        seg=seg+1;
        Sleep(1000);
    }
}
system("cls");

hr1=' ';
min1=' ';
seg1=' ';

if(min<10){
    min1='0';
}
if(seg<10){
    seg1='0';
}
if(hr<10){
    hr1='0';
}

printf("%c%d:%c%d:%c%d",hr1,hr,min1,min,seg1,seg);

if(alarm<11){
    printf("\n¡¡Alarma Practica terminada!!");
    alarm=alarm+1;
}

if(hr==hr2&&min==min2&&seg==seg2){
    alarm=0;
}
}while(hr!=24);

return 0;
}
