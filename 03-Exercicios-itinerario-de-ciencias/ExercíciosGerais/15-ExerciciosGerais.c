#include <stdio.h>
//vamos reaproveitar o programa anterior
int main(){
    int ladoA, ladoB, ladoC;
    printf("Digite uma dimensão da piscina: ");
    scanf("%d", &ladoA);
    printf("Digite outra dimensão da piscina: ");
    scanf("%d", &ladoB);
    printf("Digite a dimensão faltante: ");
    scanf("%d", &ladoC);
    printf("O volume da piscina e %d.", ladoA * ladoB * ladoC);
    return 0;
}
