//
// Created by Alejandro  Otero on 2019-11-17.
//

#ifndef PC3B_TABLERO_H
#define PC3B_TABLERO_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class tablero {
    int _barcos;
    int _fil,_col;
    vector<string> _valores;
    vector<vector<int>> _pos;
    vector<string> _letra;
public:
    tablero(int, int, int, vector<string>);
    vector<vector<int>> organizar();
    void verificar();
    void ordenar();
    void generar();
    ~tablero();
};


#endif //PC3B_TABLERO_H
