#include <iostream>
using namespace std;

class Personaje
{
private:
    
public:
    Personaje() {}
    ~Personaje() {}
    void Hablar (){
        cout << "Hola tonotos" << endl;
    }
};

class Duende : public Personaje{
private:
    int salud();
public:
    Duende(/* args */) {}
    ~Duende() {}
};

class Enano : public Personaje{
private:
int vida;
    float altura;
    int edad;
public:
    Enano() {}
    ~Enano() {}
    void Inicializar(){
        this-> altura = 2;
        this-> edad = 150;
        this -> vida = 10;
    }
    void Comer(){
        this-> vida += 1;
    }
};

int main(int argc, char const *argv[])
{
    int a = 5;
    bool b = true;
    float c = 0.1;
    double d = 0.1;
    char e = 'A';
    Enano f;

    cout << "Tamaño de tipos de datos nativos:" << endl;
    cout << "Tamaño int: " << sizeof(int) << " bytes" << endl;
    cout << "Tamaño bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Tamaño float: " << sizeof(float) << " bytes" << endl;
    cout << "Tamaño double: " << sizeof(double) << " bytes" << endl;
    cout << "Tamaño char: " << sizeof(char) << " bytes" << endl;
    cout << "Tamaño Enano: " << sizeof(Enano) << " bytes" << endl;

    cout << endl;
    cout << "Memoria Estatica C: " << endl;
    cout << "Direccione de int: " << &a << endl;
    cout << "Direccione de bool: " << &b << endl;
    cout << "Direccione de float: " << &c << endl;
    cout << "Direccione de double: " << &d << endl;
    cout << "Direccione de char: " << static_cast<void*>(&e) << endl;
    cout << "Direccione de Enano: " << &f << endl;

    cout << "Memoria Dinamica C: " << endl;
    cout << "Direccione dinamica: " << malloc(2) << endl;
    cout << "Direccione dinamica int: " << malloc(sizeof(int)) << endl;

    // Casteo de punteros en C
    Enano* direccion = (Enano*)malloc(sizeof(Enano));
    direccion -> Inicializar();

    // Casteo de punteros en C++
    Enano* instancia = new Enano;

    //Operador ->
    instancia->Comer();
    instancia->Hablar();

    //Polimorfismo
    Personaje* p = new Duende();
    Personaje* q = new Enano();

    p->Hablar();
    q->Hablar();

    cout << "Direccion P: " << p << endl;

    //Arreglos
    Duende duendes[10];
    cout << endl;
    cout << &duendes[1] << endl;
    cout << &duendes[2] << endl;
    cout << &duendes[3] << endl;
    cout << &duendes[4] << endl;

    //Conversiona direcciones
    cout << endl;
    cout << &duendes[0]+0 << endl;
    cout << &duendes[0]+1 << endl;
    cout << &duendes[0]+2 << endl;
    cout << &duendes[0]+3 << endl;

    //Conversiona direcciones
    cout << endl;
    cout << duendes +0 << endl;
    cout << duendes +1 << endl;
    cout << duendes +2 << endl;
    cout << duendes +3 << endl;

    return 0;
