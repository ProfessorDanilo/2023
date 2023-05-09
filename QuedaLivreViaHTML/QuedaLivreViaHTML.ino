/*
código utilizado em projeto de ciências com o objetivo de medir a aceleração da gravidade
início da construção do código: 09/05/2023
término da construção: ainda não finalizado
Professor: Danilo Lima
*/
//biblioteca para o wemos mini acessar a rede
#include <WiFi.h> 
char ssid[] = "nomeDaRede"; //nome da rede sem fio a ser conectada na rede
char password[] = "senhaDaRede"; //senha da rede sem fio a ser conectada
 
WiFiServer server(80); //usaremos a porta 80, utilize outra em caso de problema (EX:8082,8089) no navegador digite IP:PORTA(EX: 192.168.0.15:8082)
 
void setup() {
  Serial.begin(115200); //a velocidade do wemos é diferente da velocidade do Arduino
  delay(10); //espera 10 milisegundos
  Serial.println(""); 
  Serial.println(""); 
  Serial.print("Conectando a "); 
  Serial.print(ssid);

  WiFi.begin(ssid, password); //passa os parâmetros para conectar à rede
    /* 
    while (WiFi.status() != WL_CONNECTED) { //ENQUANTO STATUS FOR DIFERENTE DE CONECTADO
    delay(500); //INTERVALO DE 500 MILISEGUNDOS
    Serial.print("."); //ESCREVE O CARACTER NA SERIAL
  }*/
  Serial.println(""); 
  Serial.print("Conectado a rede sem fio "); 
  Serial.println(ssid);
  server.begin(); //inicia o servisor para receber dados em "WiFiServer server(porta);"
  Serial.println("Servidor iniciado.");

  Serial.print("IP para se conectar ao NodeMCU: "); 
  Serial.print("http://");
  Serial.println(WiFi.localIP()); //utilize este IP para saber onde se conectar na rede
}
void loop() {
  WiFiClient client = server.available(); //verifica se há alguém conectado
    if (!client) { //se não conectado...
    return; //...execute até que alguém esteja conectado
  }
  Serial.println("Novo cliente se conectou!"); //informa na serial que há cliente conectado
    while(!client.available()){ //aguarde até que haja requisição do cliente
      delay(1);
  }
  String request = client.readStringUntil('\r'); //lê a primeira linha da requisição
  Serial.println(request); //Eescreve a requisição do cliente via serial
  client.flush(); //aguarda até que todos os dados de saída sejam enviados ao cliente

  client.println("HTTP/1.1 200 OK"); //informa ao cliente a versão do HTTP
  client.println("Content-Type: text/html"); //informa ao cliente que o coneúdo é do tipo texto/html
  client.println("");
  client.println("<!DOCTYPE HTML>"); //informa ao navegador o tipo de conteúdo
  /*
     no trecho abaixo, inserimos o código HTML completo
  */
  client.println("<html lang=\"pt-br\">
                    <head>
                      <meta charset=\"UTF-8\">
                      <title>Título da Página</title>
                    </head>
                    <body>
                      <h1>Título Principal</h1>
                      <p>Este é um exemplo de página HTML em português brasileiro com UTF-8.</p>
                    </body>
                  </html>
                 ");
  delay(1); //INTERVALO DE 1 MILISEGUNDO
  Serial.println("Cliente desconectado"); //ESCREVE O TEXTO NA SERIAL
  Serial.println(""); //PULA UMA LINHA NA JANELA SERIAL
}
