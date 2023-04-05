#include <stdio.h>
int main(){
    float deltaT, deltaS, velocidade;
    printf("Digite o delta t: ");
    scanf("%f", &deltaT);
    printf("Digite o delta S: ");
    scanf("%f", &deltaS);
    velocidade = deltaS / deltaT;//equação da velocidade
    printf("A velocidade do movel e: %f", velocidade);
    return 0;
}
