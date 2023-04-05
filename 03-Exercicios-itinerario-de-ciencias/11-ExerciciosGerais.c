#include <stdio.h>
//vamos usar o programa anterior
int main(){
    //não precisa de for aninhado:
    for (int num1 = 1; num1 <= 100; num1++){//até 100
        printf("%d x %d = %d\n", num1, num1, num1 * num1);
    }
    return 0;
}
