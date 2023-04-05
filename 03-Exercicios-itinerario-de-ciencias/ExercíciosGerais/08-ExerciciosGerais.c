#include <stdio.h>
int main(){
    int numero;
    printf("Digite ate que numero inteiro quer somar: ");
    scanf("%d", &numero);
    int soma;//vamos colocando aqui as somas parciais
    for (int i = 1; i <= numero; i++){
        //para somarmos os números sequencialmente:
        soma = soma + i;
        /*
        vejamos:
        soma = 0; i=1; no passo inicial. Depois:
        soma = soma + i = 0 + 1 = 1; i = 2;
        soma = soma + i = 1 + 2 = 3; i = 3;
        soma = 3 + 3 = 6; i = 4;
        soma = 6 + 4 = 10; i = 5...
        */
    }
    printf("%d", soma);
    return 0;
}
