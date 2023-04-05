#include <stdio.h>
int main(){
    float precoFaixa1 = 1, precoFaixa2 = 0.75, precoFaixa3 = 0.5, total, folhas;
    printf("Digite o numero de folhas: ");
    scanf("%f", &folhas); //declaramos n como float, mesmo sendo inteiro, pois vamos
                    //ter que multiplicar por float
    if (folhas <= 100){
        total = folhas * precoFaixa1;
    }
    else if (folhas > 100 & folhas <= 200){
        total = 100 * precoFaixa1 + (folhas - 100) * precoFaixa2;
    }
    else {//coloquei o 100 em evidência
        total = 100 * (precoFaixa1 + precoFaixa2) + (folhas - 200) * precoFaixa3;
    }
    printf("O preço total para imprimir %f folhas e R$%f.", folhas, total);
    return 0;
}
