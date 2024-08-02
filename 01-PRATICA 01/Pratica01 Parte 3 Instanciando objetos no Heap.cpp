#include <iostream>
using namespace std;

// Codigo para Formatar saida cole no terminal : chcp 65001 de enter

class Veiculo{
    private:
        string nome;
        int num_rodas;

    public:
        // Construtor
        Veiculo(const string &nome) : nome(nome){
            cout << "Veiculo " << nome << " foi contruído."<< endl;
        }

        // Destrutor
        ~Veiculo(){
            cout << "Veiculo " << nome << " foi destruído." <<endl;
        }

        // Métodos para setar e obter o número de rodas
        void setNumRodas(int rodas){
            num_rodas = rodas;
        }

        int getNumRodas() const {
            return num_rodas;
        }
};
int main(void){
    // Criando um objeto no heap
    Veiculo*  veiculoHeap = new Veiculo("vHeap");
    veiculoHeap->setNumRodas(6);
    cout << "Veiculo no heap tem " << veiculoHeap->getNumRodas() <<" Rodas" << endl; 
    
    // Liberando o objeto no heap
    delete veiculoHeap;
    veiculoHeap = nullptr;

    return 0;
}