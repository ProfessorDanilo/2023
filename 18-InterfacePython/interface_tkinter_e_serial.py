import tkinter as tk
import random
from tkinter import ttk  # Importe ttk separadamente
import serial

# Configuração da porta serial
port = 'COM8'  # Substitua pelo nome da porta COM do Arduino
baudrate = 9600

# Abre a porta serial
ser = serial.Serial(port, baudrate)

def alterar_cor_led():
    cores = ['red', 'green', 'gray']
    status = ['     erro     ', 'elet. ligado', ' desligado ']
    status_atual = led['text']
    cor_atual = led['red']
    novo_status = status[(status.index(status_atual) + 1) % len(status)]
    led.config(bg=cor, text=novo_status)

def atualizar_tabela():
    # Limpar a tabela antes de atualizar
    tabela.delete(*tabela.get_children())

    for i in range(10):
        valor = random.randint(1, 100)
        tabela.insert("", "end", values=(i + 1, valor))


# Cria a janela principal
janela = tk.Tk()
janela.title("Queda Livre")

# Variável para exibir na caixa de texto
count = 0

# Caixa de texto
caixa_texto = tk.Label(janela, textvariable=count, font=("Arial", 14))
caixa_texto.grid(row=0, column=0, sticky='nw', padx=10, pady=10)

# Botão para alterar a cor do LED
botao_led = tk.Button(janela, text="INICIAR", command=alterar_cor_led())
botao_led.grid(row=0, column=1, padx=10, pady=10)

# LED (usando um Label)
led = tk.Label(janela, text=" desligado ", bg='gray', font=("Arial", 20))
led.grid(row=0, column=0, padx=10, pady=10)

# Tabela usando ttk.Treeview
tabela = ttk.Treeview(janela, columns=("Coluna 1", "Coluna 2"), show="headings", height=10)
tabela.heading("Coluna 1", text="Tempo em microssegundos")
tabela.heading("Coluna 2", text="g (m/s²)")
tabela.grid(row=1, column=0, columnspan=3, padx=10, pady=10)

# Atualizar a tabela inicialmente
atualizar_tabela()

# Dados sobre tempo de queda
titulo_tempo_queda = tk.Label(janela, text="Tempo\n(microssegundos)", font=("Arial", 24))
titulo_tempo_queda.grid(row=2, column=0, padx=10, pady=10, sticky='sw')
tempo_queda = tk.Label(janela, text="123", font=("Arial", 24))
tempo_queda.grid(row=3, column=0, padx=10, pady=10, sticky='sw')

titulo_gravidade = tk.Label(janela, text="Gravidade", font=("Arial", 24))
titulo_gravidade.grid(row=2, column=1, padx=10, pady=10, sticky='sw')
gravidade = tk.Label(janela, text="456 m/s²", font=("Arial", 24))
gravidade.grid(row=3, column=1, padx=10, pady=10, sticky='sw')

# Botão para atualizar a tabela
botao_atualizar = tk.Button(janela, text="Atualizar Tabela", command=atualizar_tabela)
botao_atualizar.grid(row=2, column=2, padx=10, pady=10, rowspan=2)

# Iniciar a interface
janela.mainloop()
