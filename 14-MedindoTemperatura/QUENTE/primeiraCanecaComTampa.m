data = csvread('primeiraCanecaComTampa.csv');  % Ler o arquivo CSV
x = data(:, 1);               % Primeira coluna do arquivo CSV
y = data(:, 2);               % Segunda coluna do arquivo CSV
x = x * 609 / 604;        % Correção do minuto do arduino
x = x/60;                          % Passando o tempo para horas
% foram 604 ciclos
% total de 10h e 9min = 609 minutos
plot(x, y, '-.');             % Plotar o gráfico
xlabel('Tempo (h)');
ylabel('Temperatura (ºC)');
title('Variação da temperatura para a caneca com tampa');
% na primeira caneca a medida começou às 20h03min com temperatura ambiente de 26°C
% a temperatura ambiente final era de 18°C às 06h06min
grid on;
grid minor;
% delay de 59320
