#include <stdio.h>
int main(){
    int leitura = 0;
    //usando do while
    do{
        printf("Selecione uma opcao: 0/qualquer coisa (sair/permanecer): ");
        scanf("%d", &leitura);
    }while(leitura);
    return 0;
}
/*
* note que com o do while, garantimos a execussão do laço mesmo que
* leitura comece com o valor 0
*/
