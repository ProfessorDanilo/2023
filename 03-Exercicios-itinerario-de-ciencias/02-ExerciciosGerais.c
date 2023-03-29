#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero = rand() % 100, escolha, acerto = 0;
    printf("Escolha um numero inteiro entre 1 e 100: ");
    scanf("%d", &escolha);
    while(acerto == 0){
        if(escolha > numero){
            printf("Muito grande. Digite um numero menor: ");
            scanf("%d", &escolha);
        }
        else if(escolha < numero){
            printf("Muito pequeno. Digite um numero maior: ");
            scanf("%d", &escolha);
        }
        else {
            printf("Você acertou!!!");
            acerto = 1;
        }
    }
    return 0;
}
