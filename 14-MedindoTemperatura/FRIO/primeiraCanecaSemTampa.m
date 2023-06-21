data = csvread('primeiraCanecaSemTampa.csv');  % Ler o arquivo CSV
x = data(70:end, 1);               % Primeira coluna do arquivo CSV
y = data(70:end, 2);               % Segunda coluna do arquivo CSV
x = (x - 70) * 1452 / 1455;        % foram 1452 minutos e 1455 ciclos efetivos
x = x/60;                          % Passando o tempo para horas
%os primeiros 70 elementos foram excluídos para que ocorrece o equilíbrio térmico
%o experimento durou 25 h 22 min (deve-se descontar os minutos iniciais desprezados)
%total de 1452 minutos efetivos
%já no arduino forma 1525 - 70 = 1455 ciclos
plot(x, y, '-');             % Plotar o gráfico
xlabel('Tempo (h)');
xlim([0,25]);
ylabel('Temperatura (ºC)');
ylim([0,20]);
title('Variação da temperatura para a caneca sem tampa');
%na primeira caneca a medida começou às 17h com temperatura ambiente de 26°C
% término às 18:22 com total de 1525 medições
%a temperatura ambiente no final da medida era de 24°C
grid on;
grid minor;
% delay de 59320 ms
