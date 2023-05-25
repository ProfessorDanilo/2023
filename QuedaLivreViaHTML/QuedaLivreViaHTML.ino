#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

const char* ssid = "Danilo_e_Udelis_2G"; // SSID da rede local
const char* password = "982508999"; // Senha da rede local
int ledPin = 2;

ESP8266WebServer server(8080);

void handleRoot() {
  String html = "<html><body><h1>Ligar/Desligar LED</h1>";
  html += "<form method=\"get\">";
  html += "<button style=\"font-size:24px; padding: 20px 20px 20px 20px; margin-right: 10px; margin-top: 10px;\" onclick=\"window.location.href='/led?state=1'\">Ligar</button>";
  html += "<button style=\"font-size:24px; padding: 20px 20px 20px 20px; margin-top: 10px;\" onclick=\"window.location.href='/led?state=0'\">Desligar</button>";
  html += "</form></body></html>";

  server.send(200, "text/html", html);
}

void handleLed() {
  String state = server.arg("state");
  digitalWrite(ledPin, state.toInt());
  server.sendHeader("Location", "/");
  server.send(303);
}

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(115200);
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("WiFi connected!");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  
  server.on("/", handleRoot);
  server.on("/led", handleLed);
  
  server.begin();
  Serial.println("Server started!");
}

void loop() {
  server.handleClient();
}
