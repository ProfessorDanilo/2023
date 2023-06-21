import matplotlib.pyplot as plt
import csv

# Dados para a caneca com tampa
xComTampa = []
yComTampa = []

with open('friaComTampa.csv', 'r') as file:
    csv_reader = csv.reader(file)
    next(csv_reader)  # Pular o cabeçalho do arquivo CSV
    for row in csv_reader:
        xComTampa.append(float(row[0]) * 609 / 604 / 60)
        yComTampa.append(float(row[1]))

# Dados para a caneca sem tampa
xSemTampa = []
ySemTampa = []

with open('friaSemTampa.csv', 'r') as file:
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
plt.title('Variação da temperatura com água fria')
plt.xlim(0, 25)
plt.ylim(0, 17.5)
plt.legend(loc='upper left')
plt.grid(True)

# Salvar
plt.savefig('agua fria.png', dpi=1000)
plt.show()
