//
// Created by Alejandro  Otero on 2019-11-17.
//

#include "tablero.h"

tablero::tablero(int barcos, int fil, int col, vector<string> valores):_barcos(barcos),_fil(fil),_col(col),_valores(valores) {}

vector<vector<int>> tablero::organizar() {
    for(int i=0; i<_barcos;i+=5){
        _letra.push_back(_valores[i]);
        _valores.erase(_valores.begin()+i);
    }

    for(unsigned int i=0; i<_valores.size();i++){
        for(int j=0; j<4;j++){
            _pos[i].push_back(stoi(_valores[j]));
        }
    }
    return _pos;
}

void tablero::verificar() {
    for(int j=0; j<_barcos;j++){
        if(_pos[j][0]==_pos[j+1][0] && _pos[j][1]==_pos[j+1][1])
            _pos.erase(_pos.begin()+j);
    }
}

void tablero::ordenar() {
    for(auto i=_pos.begin();i!=_pos.end();i++)
        for(int j=0;j<4; j++){
            sort(_pos.begin(),_pos.end());
        }

}

void tablero::generar() {
    for(int i=0; i<_fil;i++){
        for(int j=0; j<_col;j++){
            cout<<"x";
        }
        cout<<endl;
    }
}

tablero::~tablero() {}


