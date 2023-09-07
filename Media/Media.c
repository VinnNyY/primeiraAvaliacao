#include <stdio.h>
#include <math.h>

int main() {
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2.0;
    printf("A media final do bimestrre do aluno eh: %.2f\n\n", media);
    printf("=============FEITO POR VINICIUS EDUARDO=============\n");
    system("pause");

    return 0;
}