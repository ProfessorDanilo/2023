#include <stdio.h>
//Esse é mais trabalhoso
int main(){
    float IMC, peso, altura;
    printf("Digite sua altura em m: ");//a altura é em metros, não em cm
    scanf("%f", &altura);//cuidado, pois agora é float, não int
    printf("Digite o seu peso em kg: "); //lembre-se que na verdade é massa...
    scanf("%f", &peso);
    //usando a formula dada:
    IMC = peso/(altura * altura);
    printf("Seu IMC e: %f\n", IMC);
    if(IMC<16){
        printf("Magreza grave.");
    }
    else if (16 <= IMC & IMC < 17){//(16 <= IMC < 17) essa forma não funciona em C
        printf("Magreza moderada.");
    }
    else if (17 <= IMC & IMC < 18.5){
        printf("Magreza leve");
    }
    else if (18.5 <= IMC & IMC < 25){
        printf("Saudavel.");
    }
    else if (15 <= IMC & IMC < 30){
        printf("Sobrepeso");
    }
    else if (30 <= IMC & IMC < 35){
        printf("Obersidade Grau I");
    }
    else if (35 <= IMC & IMC < 40){
        printf("Obersidade Grau II (severa)");
    }
    else{//não precisa de if aqui
        printf("Obesidade Grau III (morbida)");
    }
    return 0;
}
