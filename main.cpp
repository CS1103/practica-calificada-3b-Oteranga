#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "tablero.h"
#include "crear.cpp"

using namespace std;

int main() {
    ifstream file;
    string num,filas,col;
    file.open("rectangulos.in");

    for (int i=0; i<1; i++){
        getline(file,num,' ');
        //cout<<num<<endl;
        getline(file,filas,' ');
        //cout<<filas<<endl;
        getline(file,col,'\n');
        //cout<<col<<endl;
    }
    vector<string> data;

    while(!file.eof()){
        string line;
        getline(file, line,'\n');
        if(line.size() > 0){
            data.push_back(line);
        }
    }
    file.close();
    vector<string>::iterator i;
    for (i = data.begin(); i !=data.end(); i++){
        cout << *i << endl;
    }
    file.close();

    tablero A(stoi(num),stoi(filas),stoi(col),data);
    auto v=A.organizar();
    A.verificar();
    A.ordenar();
    escribir(v);
    return 0;
}