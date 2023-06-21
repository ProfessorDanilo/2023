data = csvread('primeiraCanecaComTampa.csv');  % Ler o arquivo CSV
x = data(15:end, 1);               % Primeira coluna do arquivo CSV
y = data(15:end, 2);               % Segunda coluna do arquivo CSV
x = (x - 14) * 1500 / 1418;        % Correção do minuto do arduino
x = x/60;                          % Passando o tempo para horas
%os primeiros 14 elementos foram excluídos porque era a região que entraria em equilíbrio térmico
%o experimento durou 25h 15min (para compensar os minutos iniciais desprezados)
%total de 1500 minutos
%já no arduino forma 1497 - 14 = 1483 ciclos
plot(x, y, '-');             % Plotar o gráfico
xlabel('Tempo (h)');
xlim([0,25]);
ylabel('Temperatura (ºC)');
ylim([0,15]);
title('Variação da temperatura para a caneca com tampa');
%na primeira caneca a medida começou às 15h com temperatura ambiente de 26°C
%a temperatura ambiente final era de 26°C
grid on;
grid minor;
%para o próximo experimento, o tempo de espera entre ciclos deverá ser recalculado
% mudará de 60000 ms de delay para 59320
