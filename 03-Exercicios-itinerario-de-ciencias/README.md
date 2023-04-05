   MathJax = { tex: { inlineMath: \[ \['$', '$'\], \['\\\\(', '\\\\)'\], \], }, };

EXERCÍCIOS GERAIS
-----------------

1.  Faça um programa que receba dois números e diga qual deles é maior.
2.  Faça um programa que gere um número aleatório e pergunte ao usuário que número é. O programa deve dar a dica se o número gerado é maior ou menor e também mostrar uma mensagem dizendo quando o usuário acertou.
3.  Escreva um programa que receba cinco números e os imprima na ordem inversa.
4.  Faça um programa, usando o loop for, que imprima na tela números de um até 10.
5.  Faça um programa que receba um número digitado pelo usuário e imprima se ele é par ou ímpar.
6.  Faça um programa que lê um número, digitado pelo usuário, enquanto este número for diferente de 0. Quando o número for zero, o programa é encerrado. Faça isso usando os comandos for, while e do while.
7.  Crie um programa que recebe um número inteiro positivo e devolve a tabuada deste número. Por exemplo, recebe 7 e devolve 7 × 1, 7 × 2, 7 × 3, ..., 7 × 8, 7 × 9 e 7 × 10.
8.  Faça um programa que receba um número inteiro positivo e retorna a soma de todos os inteiros positivos menores ou iguais ao número recebido. Por exemplo, se receber dez, deverá retornar 55, pois 55 = 1 + 2 + 3 + ... + 9 + 10.
9.  Faça um programa que receba um número positivo, maior ou igual a zero, e retorna o fatorial deste número (\\(n!\\)). Se o número for zero, o fatorial é zero. Se o número recebido for \\(n\\gt 0\\), então \\(n!=n\\times (n-1) \\times \\cdots\\times 3\\times 2\\times 1\\). Por exemplo, se o número enviado for \\(0\\), então o programa retorna \\(1\\); se receber \\(3\\), retorna \\(6\\), pois \\(3\\times2\\times1\\times=6\\); se receber \\(9\\), deve retornar \\(362.880\\) e assim por diante.
10.  Faça um programa que gere a tabuada do 1 ao dez.
11.  Faça um programa que calcule o quadrado de um número indo de um até 100. Por exemplo: 1 x 1 = 1; 2 x 2 = 4; ... 100 x 100 = 10000.
12.  Faça um programa que receba dois números tipo inteiro e retorna a média entre eles.
13.  Faça um programa que calcule a soma de todos os números indo de 1 até 100.
14.  Faça um programa que recebe dois lados de um retângulo e retorna a área dele. Lembre-se que se \\(A\\) é a área de um retângulo, \\(l\\) é um dos lados e \\(h\\) o outro lado (ou, se preferir, chame de altura), então podemos calcular a área pela fórmula \\(A=l\\times h\\).
15.  Faça um programa que receba as dimensões de uma piscina em formato de prisma e retorna o volume de água dentro dela. Para facilitar, considere que todos os dados estão em metros. Lembre-se que o volume é \\(V=a\\times b\\times h\\).
16.  Sabendo que o IMC (Índice de Massa Corpórea) é calculado pela fórmula \\\[IMC=\\rm{\\frac{Peso\\;(em\\;quilograma)}{Altura^2\\;(em\\;metros)}},\\\]faça um programa que receba a massa e a altura de uma pessoa e diga qual a classificação que a pessoa se encontra, de acordo com a tabela abaixo.  
    ![](http://fisica.professordanilo.com/antigos/2022/Arquivos/img/imc-calculo-classificacao.png)  
    Fonte: [https://guiatech.net/](https://guiatech.net/python-algoritmo-para-calculo-do-imc/)  
    
17.  Faça um programa que calcula o preço de um pedágio de acordo com o número de eixos do veículo. Digamos que o pedágio custe R$ 10,00 por eixo, então um veículo com um eixo (como carros de passeio, possui um eixo), pagará 10 reais, porém veículos maiores, como diversos caminhões pagará mais.
18.  Faça um programa que determina o preço de n folhas de "xerox" sabendo que cada cópia custa \\(\\text R$\\) 1,00 se o número de cópias for de até 100. A cópia de número 101 até a cópia número 200 custará \\(\\text R$\\) 0,75 cada. As demais cópias, isto é, de número 201 e além, custa R$ 0,50 cada. Note que tudo que o usuário irá inserir é o número de cópias e o programa deve retornar o preço total.
19.  De acordo com o código brasileiro de trânsito,  
    \\(\\bullet \\) Dirigir em velocidade até 20% acima do limite da via é classificado como infração média, com multa de \\(\\text R$\\) 130,16 e cinco pontos na CNH;  
    \\(\\bullet \\) Dirigir em velocidade entre 20% e 50% acima do limite da via é classificado como infração grave, com multa de \\(\\text R$\\) 195,23 e quatro pontos na CNH;  
    \\(\\bullet \\) Dirigir em velocidade 50% acima do limite da via é classificado como infração gravíssima. Em casos assim, a multa é multiplicada por três e resulta no valor de \\(\\text R$\\) 880,41, com suspensão da CNH.  
    Fonte: [https://www.mobiauto.com.br/](https://www.mobiauto.com.br/revista/qual-o-percentual-de-tolerancia-em-uma-multa-por-excesso-de-velocidade/1307)  
      
    Tendo isso em mente, faça um programa que receba o valor limite de trânsito em uma rodovia e a velocidade de um veículo (supostamente obtida por um equipamento chamado de radar) e nos retorna se houve infração ou não; no caso de infração, retorna em quantos porcento a velocidade estava acima da permitida bem como o valor da multa e quantos pontos foi perdido.
20.  Faça um programa que recebe a nota de duas provas, uma chamada mensal (PM) e outra chamada de bimestral (PB), com pesos de 40% e 60% respectivamente; uma terceira avaliação, chamada de simulado bônus (SB), também existe, mas poderá apenas aumentar a média em um ponto, mas isso se a média final do aluno não passar de dez; o seu programa deverá retornar "Aprovado" se a nota for maior ou igual a 6 ou "Reprovado" se a nota for menor que 6. Não se preocupe com arredondamentos, mas o seu programa deverá fazer uma verificação se a média do aluno não é maior que 10, pois se assim for, a média será, na verdade, 10. Faça o teste com os seguintes valores: PM = 2, PB = 7, SB = 8 (media = 5,8); PM = 6, PB = 3, SB = 5 (media = 4,7); PM = 6, PB = 5, SB = 9 (media = 6,4); PM = 9,6, PB = 9,8, SB = 10 (media = 5,8).
21.  Escreva um programa que calcule as raízes de uma função do segundo grau. O usuário deve fornecer apenas os coeficientes \\(a\\), \\(b\\) e \\(c\\) da equação \\(f(x)=ax^2+bx+c\\) e o programa deve avaliar primeiramente se a função possui raízes (\\(\\Delta >= 0\\)); caso possua, verificar se há apenas uma raiz (\\(\\Delta = 0\\)); e por fim calcular as raízes. Lembre-se que $$\\Delta = b^2-4ac$$ e que $$x=\\frac{-b\\pm\\sqrt{\\Delta}}{2a}.$$

[Resolução dos exercícios gerais.](https://www.youtube.com/embed/cMcW8YPmiFI)

EXERCÍCIOS ENVOLVENDO FÍSICA
----------------------------

Aqui será necessário fazer pesquisas na web para encontra fórmulas e valores para determinadas constantes.

1.  Seja um veículo com velocidade constante \\(v\\): o usuário deve digitar o tempo \\(\\Delta t\\) para o veículo percorrer a distância \\(\\Delta s\\), também fornecida pelo usuário, e o programa retorna a velocidade \\(v\\) do carro.
2.  No caso anterior, agora o usuário fornece a velocidade. Ao digitar um tempo, o programa retorna a distância percorrida pelo veículo.
3.  Por fim, ainda no caso do veículo, agora são conhecidas a velocidade e a distância a percorre. O program retorna o tempo de viagem.
4.  Sabemos que a distância que o corpo percorre em queda livre em função do tempo é \\(s=\\frac{gt^2}{2}\\). Faça um programa que exiba na tela uma tabela em que se mostra a distância percorrida \\(s\\) na coluna da esquerda e o instante de tempo na coluna da direita. Exiba os resultados de segundo em segundo indo de 0 s até 99 s. Considere \\(g=10\\rm m/s^2\\).
5.  Sabendo-se que a quantidade de calor \\(Q\\), em calorias, fornecido à uma massa de água \\(m\\), medida em gramas, gera uma variação de temperatura \\(\\Delta T\\) de acordo com a seguinte relação: $$Q=m\\cdot c\\cdot \\Delta T$$ sendo \\(c=1\\rm cal/(g\\cdot ^oC)\\) o calor específico da água.  
    Faça um programa que calcule a variação da temperatura da água sendo a massa e o calor dados fornecidos pelo usuário.
6.  Faça um programa que receba a distância em anos-luz e retorne ao usuário a distância equivalente em metros, quilômetros e pés. Procure dados na internet para conseguir resolver esta questão.

[Resolução dos exercícios gerais.](https://www.youtube.com/watch?v=GezX_KqC-L4&ab_channel=ProfessorDanilo)