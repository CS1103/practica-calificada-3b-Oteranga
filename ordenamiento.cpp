//
// Created by Alejandro  Otero on 2019-11-17.
//
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <iterator>

using namespace std;

struct datos{
    int _barcos,_filas,_columnas;
    vector<string>_a;
    vector<int>_pos;
    datos(int barcos, int fil, int col, vector<string>a, vector<int>p):_barcos(barcos),_filas(fil),_columnas(col),
    _a(a), _pos(p){}
};
