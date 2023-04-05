/*
https://www.onlinegdb.com/online_c_compiler
*/
#include <stdio.h>

int main()
{
    int primeiro, segundo;
    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro);
    printf("Digite o segundo numero: ");
    scanf("%d", &segundo);
    if(primeiro > segundo){
        printf("O primeiro numero e maior.");
    }
    // é preciso usar o else antes do if abaixo
    else if(segundo > primeiro){
        printf("O segundo numero e maior.");
    }
    //caso em que ambos são iguais:
    else {
        printf("Ambos os numeros sao iguais.");
    }
    return 0;
}
