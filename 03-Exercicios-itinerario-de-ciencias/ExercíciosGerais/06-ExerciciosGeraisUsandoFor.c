#include <stdio.h>
int main(){
    int leitura = 0;
    //usando for
    int opcao;
    for (leitura; leitura != 1; leitura--){//note que não podemos chegar
                                    //a uma condição de parada
        scanf("%d", &opcao);
        if(opcao == 0){
            leitura = 2;//pois daí subtrai 1 em leitura--
        }
    }
    return 0;
}//veja que não é uma boa opção. Vamos ver em seguida com while
