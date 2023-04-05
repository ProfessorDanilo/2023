#include <stdio.h>
int main(){
    float c = 1, Q, m, DT;
    printf("Digite a quantidade de calor fornecida para a água: ");
    scanf("%d", &Q);
    printf("Digite a massa de água: ");
    scanf("%d", &m);
    //isolando a temperatura na equação do calor (equação dada)
    DT = Q / (m * c);
    printf("A variacao de temperatura da agua foi de %f oC.", DT);
    //nota: não coloco acentos porque em alguns casos da problema.
    //o return abaixo também é necessário
    return 0;
    //nos comentários pode colocar acentos sem problemas
}
