#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef int TipoDado; //Define o tipo de dado que ser� armazenado na Pilha
const int MAXTAM = 100;  //define o n�mero m�ximo de elementos que a pilha pode armazenar


//Um construtor � um m�todo que deve ser executado obrigatoriamente antes da pilha ser utilizada
void Pilha_Construtor();

//Fun��o para indicar se a Pilha est� ou n�o vazia (se exite ou n�o algum elemento armazenado)
bool Pilha_Vazia();

//Fun��o para indicar se a Pilha est� ou n�o cheia (se todas as posi��es do vetor foram ou n�o preenchidas)
bool Pilha_Cheia();

//Fun��o para retornar o n�mero de elementos armazenados na Pilha
int Pilha_Tamanho();


//M�todo para adicionar elementos do topo da Pilha
//Se o elemento for Empilhado (armazenado na Pilha), o m�todo retorna verdadeiro
//caso contr�rio, retorna falso
//Esse m�todo tamb�m � conhecido como Push
bool Pilha_Empilhar(TipoDado Elemento);


//M�todo para remover elementos da Pilha
//Se o elemento for Desempilhado (removido da Pilha), o m�todo retorna verdadeiro
//caso contr�rio, retorna falso
//O Elemento no topo da Pilha � removido e retornado por refer�ncia pelo par�metro da fun��o
//Esse m�todo tamb�m � conhecido como Pop
bool Pilha_Desempilhar(TipoDado &Elemento);


//M�todo para retornar o elemento no topo da Pilha sem Desempilha-lo
//O m�todo retorna verdadeiro se a Pilha cont�m algum elemento e
//falso caso a Pilha esteja vazia
//O elemento � retornado por refer�ncia pelo par�metro da fun��o
bool Pilha_Topo(TipoDado &Elemento);

#endif // PILHA_H_INCLUDED
