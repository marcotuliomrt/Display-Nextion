### Sobre o Display
Os displays Nextion prossuem o próprio microcontrolador ARM integrado, por isso são uma solução de "alto nível", no sentido de que já apresentam inúmeras funcionalidades integradas e o próprio software para que estas possam ser programadas.
<p />
Todos os elementos, cores e ações que o display mostra e executa são programadas no software Nextion Editor e carregado no dislpay através de um cartão micro SD ou um corversor USB-serial. A parte do código que vai no microcontrolador (arduino, STM32, ...) é responsável apenas por enviar e receber algumas informação para o display.
<p />
Todos os displays nextion fazem uso de comunicação serial, ou seja possuem apenas 2 pinos de comunicação, Rx e Tx.


### Requisitos 
* Display nextion 2.4 (o que muda de um tamaho para o outro é o layout feito no Nextion editor)
* STM Nucleo
* Compilador MBED
* [Nextion Editor](https://nextion.tech/nextion-editor/) (foi utilizada a versão 1.63.3)

### Básico do Nextion Editor
![image](https://user-images.githubusercontent.com/56456537/175836837-fa0c98e5-75f4-4f96-8b7e-79e4b5037af9.png)
<p />

#### Vermelho: Elementos padrão disponíveis para colocar no display. Ex: caixa de texto, botões, barra de progresso, check box, ...

#### Verde: Elementos baixados disponíveis para colocar no display. Ex: imagens, fontes, áudio (caso o modelo do display suporte)

#### Azul: Telas do display

#### Preto: Caracteristicas do elemento selecionado. Ex: coordenadas na tela, tamenho, cor, id, ...

#### Amarelo: Evento que ocorre quando o elemento é presionado na tela. Ex: 
'''
print "0"
'''
-> quando o botão for presionado, o display ira enviar pela serial a string "0"
Como a parte gráfica do display pode estar completamente contida nele (foi programada pelo Nextion Editor e roda no microcontrlador interno do display), sua função básica é apenas enviar valores para o microcontrolador para indicar as ações que estão sendo feitas na tela. O código que for escrito nessa caixa de texto será executado quando o evento ocorrer. Alem do "print", para enviar valores paro o microcontrolador pela serial, é possivel rodar codigos internos do dislay, por exempo "page 3" para ir para a pagina 3. 

[Comandos no nextion](https://nextion.tech/instruction-set/)

## No microcontrolador
No microcontrolador, todos os comandos enviados para o display devem ser no formator *string*.

<pre><code>

</code></pre>
