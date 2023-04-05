#include <stdio.h>
int main(){
    float anoLuz, emMetros, emKm, emPes;
    printf("Digite a distancia a ser convertida em unidades de anos-luz: ");
    scanf("%f", &anoLuz);
    emMetros = anoLuz * 9.461e15;//Sim, da certo usarmos esta notação
    emKm = anoLuz * 9.461e12;
    emPes = 3.104e16;
    printf("A distancia de %f anos-luz corresponde a:\n", anoLuz);
    printf("%f \tmetros\n", emMetros);
    printf("%f \t\tquilometros\n", emKm);
    printf("%f \tpes\n", emPes);
    return 0;
}
