#include <stdio.h>
int main(){
    int leitura;
    printf("Digite o numero que quer analisar: ");
    scanf("%d", &leitura);
    //se leitura % 2 igual a zero: par
    //se diferente de zero é ímpar
    if(leitura % 2){//se zero, entre parenteses é falso
                    //se um, entre parenteses é verdadeiro
        printf("O numero e impar.");
    }
    else {
        printf("O numero e par.");
    }
    return 0;
}
