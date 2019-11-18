#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "tablero.h"

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

    for (unsigned long i = 0; i < data.size(); i++){
        cout << data[i] << endl;
    }
    file.close();

    tablero A(stoi(num),stoi(filas),stoi(col),data);

    return 0;
}