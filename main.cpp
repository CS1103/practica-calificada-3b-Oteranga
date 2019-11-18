#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "ordenamiento.cpp"

using namespace std;

int main() {
    fstream file;
    file.open("rectangulos.in",ios::in);
    string num,filas,col;
    string accion, posiciones,posx,posy,num_f,num_c;
    int j=0,numero=0;
    vector<string>ac;
    vector<vector<int>> elementos;
    for (int i=0; i<1; i++){
        getline(file,num,' ');
        //cout<<num<<endl;
        getline(file,filas,' ');
        //cout<<filas<<endl;
        getline(file,col,'\n');
        //cout<<col<<endl;
    }

    for(int x=0;x<stoi(num);x++){
        getline(file,accion,' ');
        //cout<<accion<<endl;
        ac.push_back(accion);
        getline(file, posiciones, '\n');
            //getline(file, posy, ' ');
            //getline(file, num_f, ' ');
            //getline(file, num_c,'\n');
            //cout<<posx<<endl;
            //cout<<posy<<endl;
            //cout<<num_f<<endl;
            //cout<<num_c<<endl;
            stringstream v(posiciones);
        while(v>>numero){
        elementos[j].push_back(numero);
        cout<<numero<<endl;
        }
        j++;
    }

    for(int it=0;it<stoi(num);it++){
        for(int i=0; i<4; i++){
            //cout<<elementos[it][i]<<endl;
        }
    }
    return 0;
}