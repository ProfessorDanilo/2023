#include <stdio.h>
int main(){
    //vamos usar float para evitar problema com arredondamento
    float velocidadeLimite, velocidadeMedida;
    printf("Digite a velocidade limite da via: ");
    scanf("%f", &velocidadeLimite);
    printf("Digite a velocidade medida: ");
    scanf("%f", &velocidadeMedida);
    //vamos criar outra variavel para a razao da velocidade
    float porcentagem = (velocidadeMedida/velocidadeLimite - 1) * 100; //em %
    if (porcentagem > 0 & porcentagem < 20){ //até 20% acima
        printf("Infração Média com multa de R$ 130,16 e cinco pontos na CNH.");
    }
    //atenção ao que vou fazer... note que da para simplificar o problema do IMC
    else if (porcentagem < 50){
        printf("Infração Grave com multa de R$ 195,23 e quatro pontos na CNH.");
    }
    else {
        printf("Infração Gravissima com multa de R$ 880,41 e suspensão da CNH.");
    }
    return 0;
}
