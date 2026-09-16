#include <stdio.h>
#include <stdlib.h>


int fSoma(int n2){
    return n2 + 50;
}


int fCalc(int n){
    int total = n + 20;
    return total; 
}

 int fMultiplica(int p1, int p2, int p3){
    return (p1 * p2) * p3;
 }


int main()
{
    int num = 30;
    int resultadoFuncao;
    total = 23;
    resultadoFuncao = fCalc(num);
    printf("%i", resultadoFuncao);
    resultadoFuncao = fSoma(resultadoFuncao + 30);
    printf("%i", resultadoFuncao);
    printf("%i", fmultiplica(resultadoFuncao, 2, 2));
    system("pause");
    return 0;
} 