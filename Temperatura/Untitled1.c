#include <stdio.h>
#include <math.h>

int main() {
    float f;
	float c;

    printf("Digite a temperatura em Fahrenheit:", f);
    scanf("%f", &f);
    c = (f - 32) * 5/9;
    
	printf("A temperatura em celsius eh: %.2f \n\n", c);
 	printf("=============FEITO POR VINICIUS EDUARDO=============\n");
	
	system ("pause");
    return 0;
    
	}