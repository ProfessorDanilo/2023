#include <stdio.h>
int main(){
    float g = 10, t, s;
    //vamos criar o cabe�alho da tabela
    printf("Tempo \t\t   |   Dist�ncia percorrida\n");
    for (t = 0; t < 100; t++){//note que t < 100 incluir� at� o 99..
        s = g * t * t / 2;
        //vamos criar as linhas da tabela
        printf("%f s \t   |   %f m\n", t, s);
    }
    return 0;
}
