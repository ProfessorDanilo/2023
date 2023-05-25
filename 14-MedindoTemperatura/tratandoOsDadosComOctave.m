data = csvread('primeiraCaneca.csv');  % Ler o arquivo CSV
x = data(:, 1);               % Primeira coluna do arquivo CSV
y = data(:, 2);               % Segunda coluna do arquivo CSV

plot(x, y, 'o-');             % Plotar o gráfico
xlabel('Tempo (min)');
ylabel('Temperatura (ºC)');
title('Variação da temperatura para a primeira caneca');
%na primeira caneca a medida começou às 15h com temperatura ambiente de 26°C
