#include <stdio.h>
int main(){
    int leitura = 1;
    //usando while
    while(leitura){
        printf("Selecione uma opcao: 0/qualquer coisa (sair/permanecer): ");
        scanf("%d", &leitura);
    }
    return 0;
}//muito melhor com o while
