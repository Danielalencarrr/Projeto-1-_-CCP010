#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Componente {
private:
  bool ligado;
  bool conectado;
  int valor;
  string nome;

public:
  void ligar(bool ligado) { 
    this->ligado = true; 
  }
  void desligar() { 
    this->ligado = false; 
  }
  bool conectar(bool conectado) { 
    this->conectado = true; 
  }
  void desconectar() { 
    this->conectado = false; 
  }
  int getValor(int valor) {
    srand(time(NULL));
    valor = rand()%50;
    return valor;
  }
};
