#include <stdio.h>
int main(){
    float deltaT, deltaS, velocidade;
    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);
    printf("Digite o delta t: ");
    scanf("%f", &deltaT);
    deltaS = velocidade * deltaT;
    printf("A distancia percorrida pelo movel e: %f", deltaS);
    return 0;
}
