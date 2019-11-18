//
// Created by Alejandro  Otero on 2019-11-17.
//

#include "tablero.h"

tablero::tablero(int barcos, int fil, int col, vector<string> valores):_barcos(barcos),_fil(fil),_col(col),_valores(valores) {}

void tablero::verificar() {

}

void tablero::ordenar() {
    for(unsigned int i=0; i<_valores.size();i+=5){
        _letra.push_back(_valores[i]);
        _valores
    }
    for(unsigned int i=0; i<_valores.size();i++)
}

tablero::~tablero() {}


