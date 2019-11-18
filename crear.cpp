//
// Created by Alejandro  Otero on 2019-11-17.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include "tablero.h"

using namespace std;

template <typename T>
void escribir(vector<vector<T>> pos){
    ofstream file2;
    file2.open("rectangulos.out");
    for(unsigned int it=0;it<pos.size();it++){
        for(int i=0; i<4; i++){
            if(i==0)
                file2<<"A ";
            if(i==3){
                file2<<pos[it][i]<<endl;
            }
            file2<<pos[it][i]<<' ';

        }
    }

    file2.close();
}