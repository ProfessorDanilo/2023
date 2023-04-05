#include <stdio.h>
int main(){
    float deltaT, deltaS, velocidade;
    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);
    printf("Digite o delta S: ");
    scanf("%f", &deltaS);
    deltaT = deltaS / velocidade;
    printf("O tempo de viagem e: %f", deltaT);
    return 0;
}
