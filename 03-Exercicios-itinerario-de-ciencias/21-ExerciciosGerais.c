#include <stdio.h>
#include <math.h>//para calcular a raiz quadrada precisamos dessa biblioteca
int
main (){
    float a, b, c, delta, x1, x2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    //calculando delta:
    delta = b * b - 4 * a * c;
    if(delta < 0){
        printf("A equacao dada nao possui raizes reais.");
    }
    else if (delta == 0){
        printf("A equacao dada possui apenas uma raiz real: %f", (-b)/(2*a));
    }
    else{
        x1 = (-b - sqrt(delta))/(2*a);//sqrt() calcula a raiz quadrada do que esta entre ()
        x2 = (-b + sqrt(delta))/(2*a);
        printf("A equacao possui duas raizes reais dadas:\n");
        printf("x1 = %f \t x2 = %f", x1, x2);
    }
    return 0;
}
