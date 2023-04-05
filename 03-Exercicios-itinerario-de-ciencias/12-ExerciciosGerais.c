#include <stdio.h>
int main(){
    int num1, num2, media;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    media = (num1+num2)/2;  //note o parentesis...
    printf("A media entre os numeros %d e %d e %d.", num1, num2, media);
    return 0;
}
