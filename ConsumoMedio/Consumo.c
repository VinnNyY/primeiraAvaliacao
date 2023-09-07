#include <stdio.h>
#include <math.h>

int main() {
    float distancia;
	float combustivel;
	float consumoMedio;
	
	
    printf("Digite a quilometragem percorrida:");
    scanf("%f", &distancia);
    
    printf("Digite a quantidade de combustivel gasto:");
    scanf("%f", &combustivel);
   
    consumoMedio = distancia / combustivel;
    
    printf("A quantidade consumida foi de: %2.f km/l \n\n", consumoMedio);
 	printf("=============FEITO POR VINICIUS EDUARDO=============\n");
	system("pause");
    return 0;
    
	}