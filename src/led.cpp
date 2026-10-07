#include "led.h"

Led::Led(uint8_t pinoLed)
{
    _pinoLed = pinoLed;
}

void Led::iniciar()
{
    pinMode(_pinoLed, OUTPUT);
    digitalWrite(_pinoLed, LOW);
}

void Led::atualizar()
{

    if (_estadoPiscando)

    {
        if (!_estadoPiscando)
            return;

        const uint32_t tempoDecorrido = millis() - _tempoAnteriorAcionamento_ms >= _intervaloDoPiscar_ms;
        if (tempoDecorrido >= _intervaloDoPiscar_ms)
        {
            _tempoAnteriorAcionamento_ms = millis();
            alternar();
        }
    }
    digitalWrite(_pinoLed, _estadoLed);
}

void Led::ligar()
{
    _estadoLed = HIGH;
}

void Led::desligar()
{
    _estadoLed = LOW;
}

void Led::ativarPiscar(uint32_t tempoIntervalo_ms)
{
    _estadoPiscando = HIGH;
    _intervaloDoPiscar_ms = tempoIntervalo_ms;
    
}

void Led::desativarPiscar()
{
    _estadoPiscando = LOW;
}

void Led::alternar()
{
    _estadoLed = !_estadoLed;
}

uint8_t Led::getPinoLed(){
    return _pinoLed;
}

void Led::setEstadoLed(bool estadoLed){
    _estadoLed = estadoLed;
     
}

bool Led::getEstadoLed(){
    return _estadoLed;
}