#include <stdio.h>
#include <math.h>

int main() {
    float catetoOP, catetoAD, hipotenusa;


    printf("Digite o cateto oposto:", catetoOP);
    scanf("%f", &catetoOP);
    printf("Digite o cateto adjacente:", catetoAD);
    scanf("%f", &catetoAD);
    
    hipotenusa = sqrt(pow(catetoOP,2) + pow(catetoOP,2));
	printf("A hipotenusa eh: %.2f \n\n", hipotenusa);
 	
	printf("=============FEITO POR VINICIUS EDUARDO=============\n");
	
	system ("pause");
    return 0;
    
	}