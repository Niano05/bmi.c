#include <stdio.h>
#include <math.h>
#define PI 3.1415

float calcularAreaRectangulo (float longitud, float altura);
float calcularPerimetroRectangulo (float longitud, float altura);
float calcularDiagonalRectangulo (float longitud, float altura);

float calcularAreaCirculo (float radio);
float calcularPerimetroCirculo (float radio);

void imprimirResultados (float area, float perimetro);


int main(){
	int seleccion;
	float longitud, altura, radio;
	float area, perimetro;
	do {
		printf("Ingrese la figura que desea calcular (1 = RECTANGULO | 2 = CIRCULO): ");
		scanf ("%d", &seleccion);
		if (seleccion != 1 && seleccion != 2) {
			printf ("Opcion invailda, ingrese nuevamente.\n\n");
		}
		
	} while(seleccion != 1 && seleccion != 2);
	
	switch (seleccion){
	case 1:
		do {
			printf("\nIngrese longitud del rectangulo: ");
			scanf("%f", &longitud);
			if (longitud <= 0){
				printf("\nMedida no valida, ingrese un numero positivo.");
			}
		} while(longitud <= 0);
		
		do {
			printf("\nIngrese altura del rectangulo: ");
			scanf("%f", &altura);
			if (altura <= 0){
				printf("\nMedida no valida, ingrese un numero positivo.");
			}
		} while(altura <= 0);
		
		area = calcularAreaRectangulo (longitud, altura);
		perimetro = calcularPerimetroRectangulo (longitud, altura);
		imprimirResultados (area, perimetro);
		
		printf("\nLa diagonal es: %.2f", calcularDiagonalRectangulo(longitud, altura));
		
		break;
	case 2:
		do {
			printf("\nIngrese radio del circulo: ");
			scanf("%f", &radio);
			if (radio <= 0){
				printf("\nMedida no valida, ingrese un numero positivo.");
			}
		} while(radio <= 0);
		
		area = calcularAreaCirculo (radio);
		perimetro = calcularPerimetroCirculo (radio);
		imprimirResultados (area, perimetro);
		break;
		
	}
	return 0;
}
float calcularAreaRectangulo(float longitud, float area){
	return longitud * area;
}
	
float calcularPerimetroRectangulo (float longitud, float area){
	return 2 * (longitud + area);
}	
	
float calcularDiagonalRectangulo(float longitud, float altura){
	return sqrt ((longitud * longitud) + (altura * altura));
}	
	
float calcularAreaCirculo (float radio){
	return radio * radio * PI;
}	
	
float calcularPerimetroCirculo(float radio) {
	return 2 * radio * PI;
}

void imprimirResultados (float area, float perimetro){
	printf("\n\n---Resultados---\n");
	printf("El area de la figura es: %.2f", area);
	printf("\nEl perimetro de la figura es : %.2f", perimetro);
}

	
	
