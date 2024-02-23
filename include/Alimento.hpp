class Alimento
{
private:
    int energia;
public:
    Alimento(int energia) {
        this -> energia = energia; //scope
    }
    ~Alimento() {}
    int ExtraerEnergia(){
        return energia;
    }
};