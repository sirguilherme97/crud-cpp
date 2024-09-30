#include <iostream>
#include <string>
#include <vector>
#include "cliente.h"

using namespace std;
#ifndef SISTEMA_H
#define SISTEMA_H

class Sistema{
  vector<Cliente> user;
public:
  void cadastrar(){
    string auxNome;
    string aux;
    while(aux!="0"){
      system("cls");
      cout << "Cadastro de Cliente\n\n";
      cout << "Digite o nome do cliente: ";
      getline(cin,auxNome);
      user.push_back(Cliente(auxNome));
      cout << "\n[LOG] Cadastro concluido com sucesso\n\n";
      cout << "Deseja um novo Cadastro?\n\n[1] Sim\n[0] Nao\n\nResp: ";
      getline(cin,aux);
    }
  }
  void listar()const{
    cout << "Lista de Clientes\n\n";
    if(user.empty()){
      cout << "[LOG] Lista Vazia\n\n";
      system("pause>null");
      return;
    }
    for(auto& aux:user){
      cout << "["<< aux.pegarId()<<"] - " << aux.pegarNome() << endl;
    }
  }
  void editar(){
    int auxId;
    string auxNome;

    cout << "Editar Clientes\n\n";
    if(user.empty()){
      cout << "[LOG] Lista Vazia\n\n";
      system("pause>null");
      return;
    }
    cout << "Digite o id do cliente: ";
    cin >> auxId;
    for(auto& aux:user){
      if(aux.pegarId()==auxId){
        cout << "Digite um novo nome: ";
        cin.ignore();
        getline(cin,auxNome);
        aux.alterarNome(auxNome);
        return;
      }
    }
    cout << "[LOG] Id nao encontrado\n\n";
    system("pause>null");
  }
  void excluir(){
    int auxId;
    cout << "Excluir Clientes\n\n";
    if(user.empty()){
      cout << "[LOG] Lista Vazia\n\n";
      system("pause>null");
      return;
    }
    cout << "Digite o id do cliente: ";
    cin >> auxId;
    for(auto aux = user.begin();aux != user.end();aux++){
      if(aux->pegarId()==auxId){
        user.erase(aux);
        return;
      }
    }
    cout << "[LOG] Id nao encontrado\n\n";
    system("pause>null");
  }
};

#endif
