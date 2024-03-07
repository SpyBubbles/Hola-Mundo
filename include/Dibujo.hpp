#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Dibujo{
    private:
        fstream file;

    public:
    Dibujo (){}
    Dibujo(string filePath) {
        file.open(filePath);
    }
    ~Dibujo() {
        file.close();
    }
    void Dibujar(){
        string line;
        while(getline(file,line)){
            cout << line << endl;
        }
    }
};