#include <stdio.h>
int main(){
    int numero;
    printf("Digite um numero para criarmos a tabuada: ");
    scanf("%d", &numero);
    for (int i = 1; i<=10; i++){
        printf("%d x %d = %d\n", i, numero, numero * i);
    }
    return 0;
}
