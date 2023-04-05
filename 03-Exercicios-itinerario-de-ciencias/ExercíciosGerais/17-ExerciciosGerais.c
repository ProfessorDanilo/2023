#include <stdio.h>
int main(){
    /*
    temos a seguinte função matemática:
    preço pago = 10 reais * número de eixos
    bora começar:
    */
    int eixos, preco = 10;
    printf("Digite o numero de eixos: ");
    scanf("%d", &eixos);
    printf("O valor a ser pago e: %d", eixos * preco);
    return 0;
}
