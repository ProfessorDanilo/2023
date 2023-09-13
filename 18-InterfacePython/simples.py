import tkinter as tk
import random
from tkinter import ttk  # Importe ttk separadamente
import serial
import time

# Configuração da porta serial
port = 'COM8'  # Substitua pelo nome da porta COM do Arduino
baudrate = 9600

# Abre a porta serial
ser = serial.Serial(port, baudrate)

def altura():
    h = 20
    return h/100

def alterar_cor_led():
    cores = ['green', 'gray']
    status = ['   Ligado   ', ' Desligado ']
    status_atual = led['text']
    novo_status = status[(status.index(status_atual) + 1) % len(status)]
    cor_atual = led['bg']
    nova_cor = cores[(cores.index(cor_atual) + 1) % len(cores)]
    led.config(bg=nova_cor, text=novo_status)

def ler_serial():
    dado = ser.readline().decode('utf-8')
    tempo_queda.config(text=int(dado))
    g = 2 * altura() /((int(dado)/1e6)**2)
    gravidade.config(text=str(round(g,3))+" m/s²")
    
    
# Cria a janela principal
janela = tk.Tk()
janela.title("Queda Livre")

# Variável para exibir na caixa de texto
count = 0

# Caixa de texto
caixa_texto = tk.Label(janela, textvariable=count, font=("Arial", 14))
caixa_texto.grid(row=0, column=0, sticky='nw', padx=10, pady=10)

# Botão para alterar a cor do LED
botao_led = tk.Button(janela, text="  LER  ", command=ler_serial, font=("Arial", 20))
botao_led.grid(row=0, column=1, padx=20, pady=20)

# LED (usando um Label)
led = tk.Label(janela, text=" Desligado ", bg='gray', font=("Arial", 20))
led.grid(row=0, column=0, padx=10, pady=10)

# Dados sobre tempo de queda
titulo_tempo_queda = tk.Label(janela, text="Tempo\n(microssegundos)", font=("Arial", 30))
titulo_tempo_queda.grid(row=2, column=0, padx=20, pady=20, sticky='sw')
tempo_queda = tk.Label(janela, text="xxxxxx", font=("Arial", 24))
tempo_queda.grid(row=3, column=0, padx=30, pady=10, sticky='sw')

espaco_em_branco = tk.Label(janela, text="          ", font=("Arial", 30))
espaco_em_branco.grid(row=2, column=1, padx=20, pady=20, sticky='sw')

titulo_gravidade = tk.Label(janela, text="Gravidade", font=("Arial", 30))
titulo_gravidade.grid(row=2, column=2, padx=10, pady=10, sticky='sw')
gravidade = tk.Label(janela, text="x.xx m/s²", font=("Arial", 24))
gravidade.grid(row=3, column=2, padx=10, pady=10, sticky='sw')

alterar_cor_led()
# Iniciar a interface
janela.mainloop()
