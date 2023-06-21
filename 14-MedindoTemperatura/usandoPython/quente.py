import matplotlib.pyplot as plt
import csv

# Dados para a caneca com tampa
xComTampa = []
yComTampa = []

with open('quenteComTampa.csv', 'r') as file:
    csv_reader = csv.reader(file)
    next(csv_reader)  # Pular o cabeçalho do arquivo CSV
    for row in csv_reader:
        xComTampa.append(float(row[0]) * 609 / 604 / 60)
        yComTampa.append(float(row[1]))

# Dados para a caneca sem tampa
xSemTampa = []
ySemTampa = []

with open('quenteSemTampa.csv', 'r') as file:
    csv_reader = csv.reader(file)
    next(csv_reader)  # Pular o cabeçalho do arquivo CSV
    for row in csv_reader:
        xSemTampa.append(float(row[0]) * 512 / 513 / 60)
        ySemTampa.append(float(row[1]))

# Configuração do gráfico
plt.plot(xComTampa, yComTampa, 'b-', label='Com Tampa')
plt.plot(xSemTampa, ySemTampa, 'r-.', label='Sem Tampa')
plt.xlabel('Tempo em horas')
plt.ylabel('Temperatura em °C')
plt.title('Variação da temperatura com água quente')
plt.xlim(0, 10)
plt.ylim(10, 100)
plt.legend(loc='upper left')
plt.grid(True)

# Salvar
plt.savefig('agua quente.png', dpi=1000)
plt.show()

