/***********************************************************************
* EX 1
* 29-06-2022
* 1x motor de passo, 1 LED
***********************************************************************/

#include "mbed.h"

// estabelece a porta serial nucleo - display
Serial display(D8, D2, 9600); //tx, rx, baud

BusOut MP(D3, D4, D5, D6); // envia os bools para as bobinas do motor

DigitalOut led1(D13); // declara o led

void Rx_interrupt(); // Declaracao das funcoes


// declaracao de variaveis

char rx_line;
int motor = 0;
int dir = 0;
float period = 0.0025;
int steps = 0;
int turns = 0;

// main test program
int main() {

    display.attach(&Rx_interrupt, Serial::RxIrq); // toda vez q chegar info (Rx) pela serial, execura a funcao interupt
    
    while(1){
        
        while (motor == 1){
            while (dir == 0){
                for (int i = 0; i < 4; i++){
                                MP = 1 << i;
                                wait(period);
                                steps++;
                                
                                if (motor == 0){
                                    break;
                                    }
                }
                            
            }
                
            while (dir == 1){
                for (int i = 3; i > -1; i--){
                                MP = 1 << i;
                                wait(period);
                                steps++;
                                
                                if (motor == 0){
                                    break;
                                    }
                }
                            
            }
            
        
            
        }
    
    }

}

void Rx_interrupt(){ // funcao que recebe os outputs dos botoes do display 

    while(display.readable())
    
    rx_line = display.getc();  // Recebe o char do buffer usado pelo dispositivo "display"
//    pc.putc(rx_line); // Manda o char pela serial PC
    
    switch(rx_line) 
    {

        case 'a':
            led1=!led1;
            rx_line = 0x00; // zera o buffer 
            break;
            
        case 'b':
            motor = !motor;
            rx_line = 0x00;
            break;
            
        case 'c':
            dir = !dir;
            rx_line = 0x00;
            break;
            
            default: rx_line=0x00;
        
    
    }
    return;
}

