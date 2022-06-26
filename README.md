### Sobre o Display
Os displays Nextion prossuem o próprio microcontrolador ARM integrado, por isso são uma solução de "alto nível", no sentido de que já apresentam inúmeras funcionalidades integradas e o próprio software para que estas possam ser programadas.
<p />
Todos os elementos, cores e ações que o display mostra e executa são programadas no software Nextion Editor ---colocar o link--- e carregado no dislpay através de um cartão micro SD ou um corversor USB-serial, a parte do código que vai no periférico (arduino, STM32, ...) é responsável apenas por enviar e receber algumas informação para o display.
<p />
Todos os displays nextion fazem uso de comunicação serial, ou seja possuem apenas 2 pinos de comunicação, Rx e Tx.


### Requisitos 
* Display nextion 2.4 (o que muda de um tamaho para o outro é o layout feito no Nextion editor)
* STM Nucleo
* Compilador MBED
* Nextion editor (foi utilizada a versão 1.63.3)

### Básico do Nextion Editor
![image](https://user-images.githubusercontent.com/56456537/175836837-fa0c98e5-75f4-4f96-8b7e-79e4b5037af9.png)
<p />

#### Vermelho: Elementos padrão disponíveis para colocar no display. Ex: caixa de texto, botões, barra de progresso, check box, ...

#### Verde: Elementos baixados disponíveis para colocar no display. Ex: imagens, fontes, áudio (caso o modelo do display suporte)

#### Azul: Telas do display

#### Preto: Caracteristicas do elemento selecionado. Ex: coordenadas na tela, tamenho, cor, id, ...

#### Amarelo: Evento que ocorre quando o elemento é precionado na tela. Ex: print "0" -> quando o botao for precionado o display ira enviar pela serial a string "0"
