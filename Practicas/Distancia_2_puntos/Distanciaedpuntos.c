/*
El presente programa resivira 2 puntos bidimensionales con las siguientes caracteristicas, donde a y b
son dos puntos dentro delplano cartesiano, donde A tenga las coordenadas (X1,Y1) y B(X2,Y2)
El programa determinara la distancia existente entre el punto A y el punto B e imprimira la siguiente salida

 */
#include<stdio.h>
#include<math.h>
#define PI 3.1415169
int main(void){
	float Dist[2][2];
	float resx=0,resy=0,cuad=0,root=0,m=0,b=0,anA=0,anB=0,disA=0,disB=0,conA=0,conB=0;
	printf("PROGRAMA PARA DETERMINAR LA DISTANCIA ENTRE DOS PUNTOS\n");
	printf("Ingresa el valor de x1:\n");
	scanf("%f",&Dist[0][0]);
	printf("Ingresa el valor de y1:\n");
	scanf("%f",&Dist[0][1]);
	printf("Ingresa el valor de x2:\n");
	scanf("%f",&Dist[1][0]);
	printf("Ingresa el valor de y2:\n");
	scanf("%f",&Dist[1][1]);
	
	resx=Dist[1][0]-Dist[0][0];
	resy=Dist[1][1]-Dist[0][1];
	cuad=pow(resx,2)+pow(resy,2);
	root=sqrt(cuad);
	m=(int)(resy/resx);
	b=Dist[0][1]-(m*Dist[0][0]);
	disA=sqrt(pow(Dist[0][0],2)+pow(Dist[0][1],2));
	disB=sqrt(pow(Dist[1][0],2)+pow(Dist[1][1],2));
	anA=atan(Dist[0][1]/Dist[0][0]);
	anB=atan(Dist[1][1]/Dist[1][0]);
	conA=anA*(180/PI);
	conB=anB*(180/PI);
	
	  //Cuadrante 2

    if(Dist[1][0]<0&&Dist[1][1]>0){
        conB=180+conB;
    }
    if(Dist[0][0]<0&&Dist[0][1]>0){
            conA=180+conA;

    }
    //Cuadrante 3
    if(Dist[0][0]<0&&Dist[0][1]<0){
        conA=conA+180;
    }
    if(Dist[1][0]<0&&Dist[1][1]<0){
        conB=conB+180;
    }
    //cuadrante 4
    if(Dist[0][0]>0&&Dist[0][1]<0){
            conA=conA*-1;
        conA=conA+270;
    }
    if(Dist[1][0]>0&&Dist[1][1]<0){
        conB=conB*-1;
        conB=conB+270;
    }

     //Casos logicos
     //Si x=0
    if(Dist[0][0]==0){
		if(Dist[0][1]==0){
			conA=0;
		}else{
			if(Dist[0][1]>0){
				conA=90;
			}else{
				if(Dist[0][1]<0){
				conA=270;
			}
			}
		}
	}
	if(Dist[1][0]==0){
		if(Dist[1][1]==0){
			conB=0;
		}else{
			if(Dist[1][1]>0){
				conB=90;
			}else{
				if(Dist[1][1]<0){
				conB=270;
			}
			}
		}
	}
	//Si y=0
	if(Dist[0][1]==0){
		if(Dist[0][0]==0){
			conA=0;
		}else{
			if(Dist[0][0]>0){
				conA=0;
			}else{
				if(Dist[0][0]<0){
				conA=180;
			}
			}
		}
	}
	if(Dist[1][1]==0){
		if(Dist[1][0]==0){
			conB=0;
		}else{
			if(Dist[1][0]>0){
				conB=0;
			}else{
				if(Dist[1][0]<0){
				conB=180;
			}
			}
		}
	}

	printf("Distancia entre el punto A (%f,%f) y el punto B(%f,%f) es: %f",Dist[0][0],Dist[0][1],Dist[1][0],Dist[1][1],root);
	if(Dist[0][0]==Dist[1][0] || Dist[0][1]==Dist[1][1]){
	printf("No hay pendiente ya que los puntos estan en la misma ordenada o abscisa");	
	}
	else{
	printf("\nLa pendiente es:%f\n",m);	
		
	}
	printf("Los puntos se encuentran en la siguiente ecuacion:%fx+%f",m,b);
	printf("\n\nDistancia entre el punto A(%f,%f) y el origen es: %f",Dist[0][0],Dist[0][1],disA);
	printf("\nDistancia entre el punto B(%f,%f) y el origen es: %f",Dist[1][0],Dist[1][1],disB);
	printf("\n\nEl angulo del punto A(%f,%f) es: %f",Dist[0][0],Dist[0][1],conA);
	printf("\nEl angulo del punto B(%f,%f) es: %f",Dist[1][0],Dist[1][1],conB);
	return 0;
	
}
