#ifndef __BOTAO_H__
#define __BOTAO_H__
#include <Arduino.h>


    class Botao{
        private: 
            uint8_t _pinoBotao, 
            _modo;
            bool _estadoAnteriorBotao = HIGH;
            bool _estadoAtualBotao = HIGH;

        public:
            Botao(uint8_t pino, uint8_t  modo);
            void iniciar();
            void atualizar();
            bool pressionou();
            bool soltou();

    };




#endif