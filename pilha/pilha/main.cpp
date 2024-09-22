#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Pilha.h>
#include "Pilha.h"
using namespace std;

int main()
{


bool validarExpressao(const char* expressao) {
  Pilha_Construtor();
  char caractere;


  for (int i = 0; i < strlen(expressao); i++) {
      caractere = expressao[i];


      if (caractere == '(' || caractere == '[') {
          Pilha_Empilhar(caractere);
      }

      else if (caractere == ')' || caractere == ']') {

          if (Pilha_Vazia()) {
              return false;
          }

          char topo;
          Pilha_Topo(topo);


          if ((caractere == ')' && topo != '(') || (caractere == ']' && topo != '[')) {
              return false;
          }
          Pilha_Desempilhar(topo);
      }
  }


  return Pilha_Vazia();
}

int main() {
  char expressao[100];


  cout << "Digite uma express�o matem�tica: ";
  cin.getline(expressao, 100);


  if (validarExpressao(expressao)) {
      cout << "Sa�da: OK" << endl;
  } else {
      cout << "Sa�da: Errado" << endl;
  }

  Pilha_Destrutor();
  return 0;
}
}
