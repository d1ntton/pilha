//Bibliotecas necessárias
#include "Pilha.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>

//Função principal para demonstrar o uso da Pilha
int main()
{

    int x; //Variável utilizada para receber o valor digitado do usuário e empilhar na Pilha
           //Também será utilizada para receber os valores dos métodos Desempilhar e Topo
    char continuar; //Variável utilizada durante a solicitação de dados do usuário
                    //(enquanto o usuário quiser inserir elementos)

    Pilha_Construtor();  //para iniciar a Pilha

    printf("Digite dados para empilhar");

    do{
         printf("\n\nDigite o dado: ");
         scanf("%d", &x);

         if(Pilha_Empilhar(x))  //Enquanto forem digitados dados, estes serão inseridos na Pilha
          printf("\nElemento armazenado na Pilha\n\n");
         else
           printf("Erro: Pilha Cheia");


         printf("\nMais dados? (S/N)");
         setbuf(stdin, NULL);
         scanf("%c", &continuar);
    }while(toupper(continuar) != 'N');  //toupper é uma função definida na biblioteca
                                        //ctype para retornar a versão em maiúsculo do caracter
                                        //passado como argumento para função
                                        //Exemplo: toupper(n) retorna N

    printf("\n\nNumero de elementos na pilha: %d", Pilha_Tamanho());  //exibe o número de elementos da pilha

    if(Pilha_Topo(x))  //Tenta exibir o elemento no topo da Pilha sem Desempilha-lo  (x é retornado por referência)
       printf("\n\nElemento no Topo da Pilha: %d", x);
    else printf("\n\nErro: Pilha Vazia");


    printf("\n\nTodos os elementos:");
    while(Pilha_Desempilhar(x))  //enquanto for possível Desempilhar um elemento (x é retornado por referência)
    {                            //Esse laço é executado enquanto a Pilha não estiver vazia (enquanto exitir elementos na Pilha)
       printf("\nElemento: %d", x);  //exibe o valor desempilhado
    }


    printf("\n\n");
    system("pause");
    return 0;
}
