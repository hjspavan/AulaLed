#include "botao.h"

Botao::Botao(uint8_t pino, uint8_t  modo) { //lista de inicialização
    _pinoBotao = pino;
    _modo = modo;
}

void Botao::iniciar()
{
    pinMode(_pinoBotao, _modo);
}

void Botao::atualizar(){
    _estadoAnteriorBotao = _estadoAtualBotao;
    _estadoAtualBotao = digitalRead(_pinoBotao);

}

bool Botao::pressionou(){
    return _estadoAnteriorBotao == HIGH && _estadoAtualBotao == LOW;
   
} 

bool Botao::soltou(){
    return _estadoAnteriorBotao == LOW && _estadoAtualBotao == HIGH;
}

