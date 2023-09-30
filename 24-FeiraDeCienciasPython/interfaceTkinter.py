import tkinter as tk
import random
from tkinter import ttk  # Importe ttk separadamente
import serial
import time

# Configuração da porta serial
port = 'COM9'  # Substitua pelo nome da porta COM do Arduino
baudrate = 9600

# Abre a porta serial
ser = serial.Serial(port, baudrate)

global h
h = 0

def atualizar_botao():
    global h
    botao_altura1.config(text = str(h) + " milimetros ")

def crescer():
    global h
    h += 1
    atualizar_botao()

def crescer_10():
    global h
    h += 10
    atualizar_botao()

def diminuir_10():
    global h
    h += -10
    atualizar_botao()

def crescer_100():
    global h
    h += 100
    atualizar_botao()
    
def altura():
    global h
    return h/1000
    
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
    g = 2 * altura() /((int(dado)/1e3)**2)
    gravidade.config(text=str(round(g,3))+" m/s²")
    
    
# Cria a janela principal
janela = tk.Tk()
janela.title("Queda Livre")

# Variável para exibir na caixa de texto
count = 0

# Caixa de texto
caixa_texto = tk.Label(janela, textvariable=count, font=("Arial", 14))
caixa_texto.grid(row=0, column=0, sticky='nw', padx=10, pady=10)

# Sil
botao_altura1 = tk.Button(janela, text=str(h)+" milimetros ", command=atualizar_botao, font=("Arial", 20))
botao_altura1.grid(row=0, column=6, padx=30, pady=30)

botao_altura2 = tk.Button(janela, text = " + 100 milimetros ", command = crescer_100, font=("Arial",20))
botao_altura2.grid(row = 2, column = 6, padx = 30, pady = 30)

botao_altura3 = tk.Button(janela, text = " + 1 milimetros ", command = crescer, font=("Arial",20))
botao_altura3.grid(row = 4, column = 6, padx = 30, pady = 30)

botao_altura4 = tk.Button(janela, text = " + 10 milimetros ", command = crescer_10, font=("Arial",20))
botao_altura4.grid(row = 4, column = 8, padx = 30, pady = 30)

botao_altura5 = tk.Button(janela, text = " - 10 milimetros ", command = diminuir_10, font=("Arial",20))
botao_altura5.grid(row = 2, column = 8, padx = 30, pady = 30)

# Botão para alterar a cor do LED
botao_led = tk.Button(janela, text="  LER  ", command=ler_serial, font=("Arial", 20))
botao_led.grid(row=0, column=1, padx=20, pady=20)

# LED (usando um Label)
led = tk.Label(janela, text=" Desligado ", bg='gray', font=("Arial", 20))
led.grid(row=0, column=0, padx=10, pady=10)

# Dados sobre tempo de queda
titulo_tempo_queda = tk.Label(janela, text="Tempo\n(milissegundos)", font=("Arial", 30))
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