//Bibliotecas necess�rias
#include "Pilha.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>

//Fun��o principal para demonstrar o uso da Pilha
int main()
{

    int x; //Vari�vel utilizada para receber o valor digitado do usu�rio e empilhar na Pilha
           //Tamb�m ser� utilizada para receber os valores dos m�todos Desempilhar e Topo
    char continuar; //Vari�vel utilizada durante a solicita��o de dados do usu�rio
                    //(enquanto o usu�rio quiser inserir elementos)

    Pilha_Construtor();  //para iniciar a Pilha

    printf("Digite dados para empilhar");

    do{
         printf("\n\nDigite o dado: ");
         scanf("%d", &x);

         if(Pilha_Empilhar(x))  //Enquanto forem digitados dados, estes ser�o inseridos na Pilha
          printf("\nElemento armazenado na Pilha\n\n");
         else
           printf("Erro: Pilha Cheia");


         printf("\nMais dados? (S/N)");
         setbuf(stdin, NULL);
         scanf("%c", &continuar);
    }while(toupper(continuar) != 'N');  //toupper � uma fun��o definida na biblioteca
                                        //ctype para retornar a vers�o em mai�sculo do caracter
                                        //passado como argumento para fun��o
                                        //Exemplo: toupper(n) retorna N

    printf("\n\nNumero de elementos na pilha: %d", Pilha_Tamanho());  //exibe o n�mero de elementos da pilha

    if(Pilha_Topo(x))  //Tenta exibir o elemento no topo da Pilha sem Desempilha-lo  (x � retornado por refer�ncia)
       printf("\n\nElemento no Topo da Pilha: %d", x);
    else printf("\n\nErro: Pilha Vazia");


    printf("\n\nTodos os elementos:");
    while(Pilha_Desempilhar(x))  //enquanto for poss�vel Desempilhar um elemento (x � retornado por refer�ncia)
    {                            //Esse la�o � executado enquanto a Pilha n�o estiver vazia (enquanto exitir elementos na Pilha)
       printf("\nElemento: %d", x);  //exibe o valor desempilhado
    }


    printf("\n\n");
    system("pause");
    return 0;
}
