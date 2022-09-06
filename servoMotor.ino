/*   Código do Servo Motor Arduino
    
     Monte seus próprios projetos sem dificuldade com programação! 
     ACESSE: https://flaviobabos.com.br/
*/

#include <Servo.h> // Biblioteca do Servo
Servo meuservo;  // Objeto Servo;    // Variável Ângulo


#include <ArduinoJson.h>
const int TAMANHO = 200;
void setup() {
  Serial.begin(9600);
  meuservo.attach(9);
}
void loop() {
     
  if (Serial.available() > 0) {
    //Lê o JSON disponível na porta serial:
    StaticJsonDocument<TAMANHO> json;
    deserializeJson(json, Serial);
    if(json.containsKey("grau")) {
      int valor = json["grau"];
      meuservo.write(valor); 
    }

  } 
  
}

        
