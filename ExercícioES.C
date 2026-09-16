#include <stdio.h>
#include <stdlib.h>


int fsoma(int a, int b) {
    return a + b + 10;
}

int fmult(int resultadoSoma, int terceiroNumero) {
    return (resultadoSoma + terceiroNumero) * 3;
}

int fcubo(int resultadoMult) {
    return resultadoMult * resultadoMult * resultadoMult;
}

int main() {
    int num1, num2, num3;

    printf("Informe o 1o numero inteiro: ");
    scanf("%d", &num1);

    printf("Informe o 2o numero inteiro: ");
    scanf("%d", &num2);

    printf("Informe o 3o numero inteiro: ");
    scanf("%d", &num3);

    int resultadoSoma = fsoma(num1, num2);
    int resultadoMult = fmult(resultadoSoma, num3);
    int resultadoCubo = fcubo(resultadoMult);

    printf("\nResultado de fsoma: %d\n", resultadoSoma);
    printf("Resultado de fmult: %d\n", resultadoMult);
    printf("Resultado de fcubo: %d\n", resultadoCubo);

    return 0;
}