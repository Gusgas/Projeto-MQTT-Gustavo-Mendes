# Repositório da Sprint 8

## Objetivo
O objetivo deste projeto é utilizar um Arduino Uno mais um Sensor Magnético para monitorar se a porta de um Rack de Rede está **ABERTO** ou **FECHADO**; enviar essa informação via Internet utilizando o protocolo MQTT (***M****essage **Q**ueuing **T**elemtry **T**ransport*) para um servidor MQTT hospedado na ***A**mazon **W**eb **S**ervice* (AWS) e exibir a informação em um client MQTT ([MQTT Dash])(https://play.google.com/store/apps/details?id=net.routix.mqttdash&hl=en&gl=US) instalado em um Smartphone, conforme a imagem abaixo.

![](https://camo.githubusercontent.com/7beef2d4780d87a603d7de49b2da0467c8537dff96575b628a04bd4010ebb1cc/68747470733a2f2f692e696d6775722e636f6d2f4d576870586b562e706e67)

Foram utilizadas as seguintes bibliotecas:
* [UIPEthernet](https://github.com/UIPEthernet/UIPEthernet) (conexão do ENC28J60 com o Arduino) 
* [PubSubClient](https://pubsubclient.knolleary.net) (client MQTT para o Arduino)

## Materias

* Arduino Uno
* Modulo Ethernet (ENC28J60)
* Sensor Magnético
* Jumpers

## Circuito



![](https://camo.githubusercontent.com/ad1da211b35b60b23fb095a64e76dc6504d0c3229e853bd82a69a4d5d27bbb88/68747470733a2f2f692e696d6775722e636f6d2f594947477453472e706e67)

## Autor: Gustavo Mendes 

[![](https://camo.githubusercontent.com/a80d00f23720d0bc9f55481cfcd77ab79e141606829cf16ec43f8cacc7741e46/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c696e6b6564496e2d3030373742353f7374796c653d666f722d7468652d6261646765266c6f676f3d6c696e6b6564696e266c6f676f436f6c6f723d7768697465)](https://www.linkedin.com/in/gustavo-mendes-custodio-da-silva/)

[![](https://camo.githubusercontent.com/be08f7a1c998ec3e477fd0d3cc0e7fa39255cce4e77daf537e80c0f33e4d87d0/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4d6963726f736f66745f4f75746c6f6f6b2d3030373844343f7374796c653d666f722d7468652d6261646765266c6f676f3d6d6963726f736f66742d6f75746c6f6f6b266c6f676f436f6c6f723d7768697465)](https://gustavomendes.sa@outlook.com)

