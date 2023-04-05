#include <stdio.h>
int main(){
    int ladoA, ladoB;
    printf("Digite um lado do retângulo: ");
    scanf("%d", &ladoA);
    printf("Digite o outro lado do retângulo: ");
    scanf("%d", &ladoB);
    printf("A area do retangulo e %d.", ladoA * ladoB);
    return 0;
}
