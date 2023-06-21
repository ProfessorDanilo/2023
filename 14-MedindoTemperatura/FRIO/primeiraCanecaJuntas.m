%Para mais detalhes, veja os arquivos separados

%dados para a caneca com tampa
dadosComTampa = csvread('primeiraCanecaComTampa.csv');
xComTampa = dadosComTampa(15:end, 1);
yComTampa = dadosComTampa(15:end, 2);
xComTampa = (xComTampa - 14) * 1500 / 1418;
xComTampa = xComTampa/60;

%dados para a caneca sem tampa
dadosSemTampa = csvread('primeiraCanecaSemTampa.csv');
xSemTampa = dadosSemTampa(70:end, 1);
ySemTampa = dadosSemTampa(70:end, 2);
xSemTampa = (xSemTampa - 70) * 1452 / 1455;
xSemTampa = xSemTampa/60;

%plotando
plot(xComTampa, yComTampa, 'b-', xSemTampa, ySemTampa, 'r--');
ylabel('Temperatura em °C');
xlabel('Tempo em horas');
title('Comparando caneca com e sem tampa');xlabel('Tempo (h)');
xlim([0,25]);
ylabel('Temperatura (ºC)');
ylim([0,20]);
title('Variação da temperatura para a caneca sem tampa');
legend('Com Tampa', 'Sem Tampa', 'Location', 'northwest');
grid on;
grid minor;


x = linspace(0, 10, 100);
y1 = sin(x);
y2 = cos(x);


