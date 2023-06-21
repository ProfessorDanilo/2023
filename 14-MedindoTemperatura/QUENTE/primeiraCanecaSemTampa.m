data = csvread('primeiraCanecaSemTampa.csv');  % Ler o arquivo CSV
x = data(:, 1);               % Primeira coluna do arquivo CSV
y = data(:, 2);               % Segunda coluna do arquivo CSV
x = x * 512 / 513;        % Correção do minuto do arduino
x = x/60;                          % Passando o tempo para horas
% foram 513 ciclos
% total de 8h e 32min = 512 minutos
plot(x, y, '-.');             % Plotar o gráfico
xlabel('Tempo (h)');
ylabel('Temperatura (ºC)');
title('Variação da temperatura para a caneca sem tampa');
% na primeira caneca a medida começou às 06h18min com temperatura ambiente de 18°C
% a temperatura ambiente final era de 18°C às 14h50min
grid on;
grid minor;
% delay de 59320
