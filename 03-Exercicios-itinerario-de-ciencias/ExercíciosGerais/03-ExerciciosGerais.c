#include <stdio.h>
int main() {
    int vetor[5]; //aqui definimoa que da para salvar cinco elementos
    //vamos ler cinco elementos usando for
    for(int i = 0; i <= 4; i++){
        printf("Digite o %d elemento: ", i+1);
        scanf("%d", &vetor[i]);//salva cada número
    }
    printf("Numeros em ordem inversa: ");
    for(int i = 4; i >= 0; i--){//vamos fazer o i diminuir de 4 a 0
        printf("\n%d", vetor[i]);
    }
    return 0;
}
