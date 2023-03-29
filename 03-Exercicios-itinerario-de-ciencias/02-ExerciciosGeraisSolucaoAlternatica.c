#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero = rand() % 100, escolha;
    printf("Escolha um numero inteiro entre 1 e 100: ");
    scanf("%d", &escolha);
    while(escolha != numero){
        if(escolha > numero){
            printf("Muito grande. Digite um numero menor: ");
            scanf("%d", &escolha);
        }
        else if(escolha < numero){
            printf("Muito pequeno. Digite um numero maior: ");
            scanf("%d", &escolha);
        }
    }
    printf("Você acertou!!!");
    return 0;
}
