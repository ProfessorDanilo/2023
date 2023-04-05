#include <stdio.h>

int main(){
    //vamos usar o for aninhado:
    for (int num1 = 1; num1 <= 10; num1++){
        for(int num2 = 1; num2 <= 10; num2++){
            printf("%d\tx\t%d\t=\t%d\n", num1, num2, num1 * num2);
        }
    }
    return 0;
    //o \t serve para alinhar o conteúdo. Vamos substituir os espaços por \t
}
