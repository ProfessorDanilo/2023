x = logspace(-1, 1, 100);
y = x.^(1/3);

loglog(x, y);
xlabel('x');
ylabel('f(x)');
title('Gráfico Log-Log de f(x) = x^2');

grid on;
