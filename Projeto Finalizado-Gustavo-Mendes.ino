//Nome do Codigo: SDL8
//Autor: Gustavo Mendes(GusGas)
//Finalidade do codigo: Utilizar o Arduino UNO juntamente como um  sensor magnetico, um servidor na AWS e um client MQTT para monitorar se um Rack está aberto ou fechado
 
#include <PubSubClient.h>

#include <UIPEthernet.h>
#include <utility/logging.h>

#include <SPI.h>
int pino2 = 2;
bool estado_sensor;


//Define o endereço MAC que será utilizado
byte mac[] = {0x0C, 0xA4, 0x9E, 0xA8, 0xCE, 0x4F};
bool mensagem;
//Inicia o cliente Ethernet
EthernetClient client;
PubSubClient  mqttClient(client);

void setup() {
  pinMode(pino2,INPUT_PULLUP);
    //Inicia o controlador Ethernet e solicita um IP para o servidor de DHCP
    Ethernet.begin(mac);

    //Inicia o monitor Serial
    Serial.begin(9600);
    mqttClient.setServer("54.161.191.80",1883);

    //Exibe no Monitor Serial as informações sobre o IP do Arduino
    Serial.print("O IP do Arduino e: ");
    Serial.println(Ethernet.localIP());

    //Exibe no Monitor Serial as informações sobre a Máscara de Rede do Arduino
    Serial.print("A Mascara de Rede do Arduino e: ");
    Serial.println(Ethernet.subnetMask());

    //Exibe no Monitor Serial as informações sobre o Gateway do Arduino
    Serial.print("O Gateway do Arduino e: ");
    Serial.println(Ethernet.gatewayIP());

    //Exibe uma linha em branco
    Serial.println("");

}
//Progama que verifica se o Rack está aberto ou fechado e enviar a informação para o servidor MQTT

void loop() {

    estado_sensor=digitalRead(pino2);
    mqttClient.connect("gusgas-t");
    
    if (estado_sensor){
       mensagem = mqttClient.publish("gusgas-t","ABERTO!!!!");
       Serial.println("O Rack Esta Aberto ");
       
    }
    else { 
     mensagem = mqttClient.publish("gusgas-t","FECHADO!!!");
     Serial.println("O Rack Esta Fechado ");
    }
    
    mqttClient.loop();
    
   
}