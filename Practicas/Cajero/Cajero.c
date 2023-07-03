/*
Dadas las siguientes denominaciones
 $100,$200,$500
Establecer un algoritmo que devuelva una cantidad solicitada por el usuario con las siguientes reservas
"No exceder por retiro $12,000
2)Llevar un conteo de la cantidad de billetes entregados por cada denominación
3)Ajustar la cantidad de billetes como sigue: 600 billetes de $100 
4)La cantidad debe de ser mayor o igual al billete de la menor denominación y con multiplos de esta denominación

*/
#include<stdio.h>
#include<math.h>
int main(void){
	int den,canti,resi=0;
	char ans[5];
	int ohd=600,twh=600,fvh=600,rohd=0,rtwh=0,rfvh=0;
		printf("*****CAJERO****\n");
		printf("Ingrese la cantidad a retirar que no exceda los $12,000:");
		scanf("%f",&canti);	
	
	while(ans[0]=='si'){
		//printf("*****CAJERO****\n");
		//("Ingrese la cantidad a retirar que no exceda los $12,000:");
		//scanf("%f",&canti);	
		resi= canti%100;
		if(resi==0){

				if(canti<=12000){
        		printf("Se solicito %d cantidad\n",canti);
                if(canti>=500){
                rfvh=canti/500;
                resi=canti%500;
                canti=resi;
                fvh=fvh-rfvh;
                printf("Entregada en %d billetes de quinientos\n",rfvh);
                }
                if(canti>=200){
                    rtwh=canti/200;
                    resi=canti%200;
                    canti=resi;
                    twh=twh-rtwh;
                    printf("Entregada en %d billetes de doscientos\n",rtwh);
                }
                if(canti>=100){
                    rohd=canti/100;
                    resi=canti%100;
                    canti=resi;
                    ohd=ohd-rohd;
                    printf("Entregada en %d billetes de cien\n",rohd);
                }

                printf("Reporte:\n");
                printf("Billetes de cien: %d\n",ohd);
                printf("Billetes de doscientos: %d\n",twh);
                printf("Billetes de quinientos: %d\n",fvh);
                printf("Desea realizar otro retiro?\s)Si\tn).No\n");
                scanf("%s",&ans);
                system("cls");
        		}
    	}
}
//En caso de elejir no
		printf("\nVuelva pronto.");
		return 0;
}

