#include <stdio.h>
int main(){
    float g = 10, t, s;
    //vamos criar o cabeçalho da tabela
    printf("Tempo \t\t   |   Distância percorrida\n");
    for (t = 0; t < 100; t++){//note que t < 100 incluirá até o 99..
        s = g * t * t / 2;
        //vamos criar as linhas da tabela
        printf("%f s \t   |   %f m\n", t, s);
    }
    return 0;
}
