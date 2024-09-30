#include <string>
using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H


class Cliente{
  int id;
  static int numClientes;
  string nome;
public:
  Cliente(string _nome){
    this->id=++numClientes;
    this->nome=_nome;
  }
  int pegarId()const{
    return id;
  }
  string pegarNome()const{
    return nome;
  }
  void alterarNome(string _nome){
    this->nome=_nome;
  }

};
int Cliente::numClientes=0;


#endif