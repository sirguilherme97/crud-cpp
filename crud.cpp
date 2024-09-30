#include <iostream>
#include <string>
#include <vector>
#include "sistema.h"

using namespace std;

int main() {
  string op;
  Sistema sys;

  while(op!="0"){
    system ("cls");
    cout << "Menu\n\n";
    cout << "[1] Cadastrar Clientes\n";
    cout << "[2] Listar    Clientes\n";
    cout << "[3] Editar    Clientes\n";
    cout << "[4] Excluir   Clientes\n\n";
    cout << "[0] Sair\n\n";
    cout << "Opcao: ";
    getline(cin,op);

    if(op=="1"){
      system("cls");
      sys.cadastrar();
    }else if(op=="2"){
      system("cls");
      sys.listar();
      system("pause>null");
    }else if(op=="3"){
      system("cls");
      sys.editar();
    }else if(op=="4"){
      system("cls");
      sys.excluir();
    }else if(op=="0"){
      return 0; 
    }
  }
}