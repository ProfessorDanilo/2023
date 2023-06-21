%Para mais detalhes, veja os arquivos separados
grau = 3; %valor do fit para a exponencial

%dados para a caneca com tampa
dadosComTampa = csvread('primeiraCanecaComTampa.csv');
xComTampa = dadosComTampa(:, 1);
yComTampa = dadosComTampa(:, 2);
xComTampa = xComTampa * 609 / 604;
xComTampa = xComTampa/60;
%regressão
logY = log(yComTampa);
coeficientes = polyfit(xComTampa, logY, grau);
disp(coeficientes);
ajusteComTampa = exp(polyval(coeficientes, xComTampa));

%dados para a caneca sem tampa
dadosSemTampa = csvread('primeiraCanecaSemTampa.csv');
xSemTampa = dadosSemTampa(:, 1);
ySemTampa = dadosSemTampa(:, 2);
xSemTampa = xSemTampa * 512 / 513;
xSemTampa = xSemTampa/60;
%regressão
logY = log(ySemTampa);
coeficientes = polyfit(xSemTampa, logY, grau);
disp(coeficientes);
ajusteSemTampa = exp(polyval(coeficientes, xSemTampa));

%plotando
plot(xComTampa, yComTampa, 'b-.', xSemTampa, ySemTampa, 'r--', xComTampa, ajusteComTampa, xSemTampa, ajusteSemTampa);
ylabel('Temperatura em °C');
xlabel('Tempo em horas');
title('Comparando caneca com e sem tampa');xlabel('Tempo (h)');
xlim([0,10]);
ylabel('Temperatura (ºC)');
ylim([10,100]);
title('Variação da temperatura com água quente');
legend('Com Tampa', 'Sem Tampa', 'Location', 'northwest');
grid on;
grid minor;



