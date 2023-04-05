#include <stdio.h>
int
main ()
{
    float PM, PB, SB, media;
    //vamos inserir as notas:
    printf ("Digite a nota da Prova Mensal: ");
    scanf ("%f", &PM);
    printf("Digite a nota da Prova Mensal: ");
    scanf("%f", &PB);
    printf ("Digite a nota do Simulado Bonus: ");
    scanf ("%f", &SB);
    media = 0.4 * PM + 0.6 * PB + SB / 10;
    if (media > 10)
    {
      media = 10;
    }
    if (media >= 6)
    {
      printf ("A sua media e %f e voce esta aprovado(a).", media);
    }
    else
    {
        printf ("A sua media e %f e voce esta reprovado(a).", media);
    }
    return 0;
}
//OBS: a ultima media do exemplo esta errada
