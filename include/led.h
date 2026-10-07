#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led{

   
    private:
    
    uint8_t _pinoLed;
    bool _estadoLed = 0;
    bool _estadoPiscando = 0;
    uint32_t _tempoAnteriorAcionamento_ms =0;
    uint32_t _intervaloDoPiscar_ms = 1000;

    
    public:
    Led(uint8_t pinoLed);

    void ligar();
    void desligar();
    void ativarPiscar(uint32_t tempoIntervalo_ms);
    void desativarPiscar();
    void iniciar();
    void atualizar();
    void alternar();
    uint8_t getPinoLed();
    void setEstadoLed(bool estadoLed);
    bool getEstadoLed();

};


#endif