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
    // Testando a criação e destruição de objetos
    {   
        Veiculo veiculo1("v1");
        veiculo1.setNumRodas(4);
        cout << "Veiculo " << veiculo1.getNumRodas() << " rodas" << endl;
       
        {
            Veiculo veiculo2("v2");
            veiculo2.setNumRodas(2);
            cout << "Veiculo" << veiculo2.getNumRodas() << " rodas" << endl;

            {
                Veiculo veiculo3 ("v3");
                veiculo3.setNumRodas(3);
                cout << "Veiculo " << veiculo3.getNumRodas() << " rodas" << endl;
            }

        }
    }
        
     cout << "Primeria aplicação" << endl;
     return 0;
}