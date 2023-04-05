#include <stdio.h>
//vamos aproveitar o programa anterior???
int main(){
    int numero;
    printf("Digite ate que numero inteiro quer calcular o fatorial: ");
    scanf("%d", &numero);
    int fatorial = 1; //se não declarar como 1, fatorial fica 0 (errado)
    //abaixo só se numero > 0. Então:
    if(numero>0){//selecionei o conteudo e apertei tab
        for (int i = 1; i <= numero; i++){
            fatorial = fatorial * i;
        }
    printf("%d! = %d", numero, fatorial);//a resposta é essa se numero > 0
    }//não esqueça de fechar o if
    else if(numero==0){
        printf("0! = 1");
    }
    else{//se o numero for negativo
        printf("Numero digitado nao possui fatorial.");
    }
    return 0;
    //se o número digitado for não inteiro (flutuante), o computador trunca
    //o número selecionando apenas a parte inteira do número digitado.
    //por isso, nesse programa, 3.4! = 3.9! = 3! = 6. Vamos testar
}
