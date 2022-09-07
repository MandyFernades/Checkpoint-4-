# Checkpoint-4 :computer:


Nesse projeto, realizamos a criação do protótipo de um sistema de identificação IoT.

Teremos uma integração com dois Arduinos. 

O primeiro terá um sensor RFID, que ao encostar uma tag enviará o seu valor através de um json para o NodeRED,
que passará por um  MQTT Broker, e retornará para um dashboard no NodeRED apresentando o valor da tag, valor esse
que também será enviado para o usuário no Telegram via chatbot.

O segundo Arduino será ligado a um Servo Motor, que poderá ser movimentado atráves de dois botões presentes no Dashboard,
que ao serem clicados enviarão um json para o Arduino contendo o grau para onde o Servo Motor irá se movimentar, podendo ser de 0°
ou 180°.

Link de Apresentação no Youtube:
https://www.youtube.com/watch?v=CC5aHomOVXo&ab_channel=NicolasTigle

Checkpoint realizado em dupla.

Nomes dos integrantes:

Amanda da Silva Fernandes - RM86688

Nicolas Tigle Lins Silva - RM88468


