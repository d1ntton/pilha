//Bibliotecas necess�rias
#include "Pilha.h"


//defini��o de vari�veis utilizadas para controlar e armazenar os dados na pilha
TipoDado Pilha[MAXTAM];  //esta implementa��o utiliza mem�ria est�tica, ou seja, ser� utilizado
                        //um vetor para armazenar os dados na pilha
                        //Nesse exemplo ser� criada uma pilha de inteiros, mas poderia ser
                        //qualquer outro tipo de dado

int Topo;    //Vari�vel utilizada para manter o controle do estado atual da pilha


//Um construtor � um m�todo que deve ser executado obrigatoriamente antes da pilha ser utilizada
void Pilha_Construtor()
{

   Topo = -1;  //estado inicial da pilha.
               //Topo deve se referir ao �ndice -1 do vetor Pilha
               //para indicar que nenhum elemento foi empilhado
}

//Fun��o para indicar se a Pilha est� ou n�o vazia (se exite ou n�o algum elemento armazenado)
bool Pilha_Vazia()
{

   return Topo == -1;    //Pela forma como os elementos s�o Empilhados e Desempilhados (m�todos a seguir)
                         //tem-se que a Pilha est� vazia se o valor de Topo for -1
                         //O indice zero indicar� que h� um elemento armazenado nesta posi��o

                         //Se os valor de Topo for igual a -1, a fun��o retorna verdadeiro
                         //caso contr�rio, ser� retornado falso (operador de compara��o ==)
}


//Fun��o para indicar se a Pilha est� ou n�o cheia (se todas as posi��es do vetor foram ou n�o preenchidas)
bool Pilha_Cheia()
{
    if(Topo >= MAXTAM-1)  //Pela forma como os elementos s�o Empilhados e Desempilhados (m�todos a seguir)
                          //tem-se que se o Topo for igual ao �ltimo �ndice do vetor (MAXTAM-1) ent�o a Pilha est� cheia
                          //Lembrar que o vetor come�a no �ndice zero e vai at� MAXTAM-1
                          //e o valor de Topo indica onde o �ltimo elemento inserido foi empilhado
      return true;
    else
      return false;
}


//Fun��o para retornar o n�mero de elementos armazenados na Pilha
int Pilha_Tamanho()
{

    return Topo+1;   //Observe que pela l�gica do m�todo Empilhar a seguir, o Topo + 1
                     //sempre se refere a quantidade de elementos na Pilha
}


//M�todo para adicionar elementos do topo da Pilha
//Se o elemento for Empilhado (armazenado na Pilha), o m�todo retorna verdadeiro
//caso contr�rio, retorna falso
//Esse m�todo tamb�m � conhecido como Push
bool Pilha_Empilhar(TipoDado Elemento)
{

     if(!Pilha_Cheia())  //Se a Pilha n�o estiver cheia, podemos adicionar algum elemento
     {

        Topo++;  //Topo � incrementado para indicar onde o elemento deve ser inserido no vetor
        Pilha[Topo] = Elemento; //O elemento atual � inserido (c�pia) na posi��o indicada por Topo
        return true;  //Retona verdadeiro, indicando que o elemento foi empilhado (inserido na Pilha)
     }
     else //caso a Pilha esteja cheia
      return false;  //Retona falso, indicando que nenhum elemento foi empilhado (a Pilha est� cheia)
}


//M�todo para remover elementos da Pilha
//Se o elemento for Desempilhado (removido da Pilha), o m�todo retorna verdadeiro
//caso contr�rio, retorna falso
//O Elemento no topo da Pilha � removido e retornado por refer�ncia pelo par�metro da fun��o
//Esse m�todo tamb�m � conhecido como Pop
bool Pilha_Desempilhar(TipoDado &Elemento)
{
     if(!Pilha_Vazia())   //primeiro deve-se conferir se a Pilha n�o est� vazia
     {
        Elemento = Pilha[Topo]; //Copia para a vari�vel Elemento o valor
                                //armazenado no topo da Pilha
                                //Esse valor � indicado pela vari�vel Topo


        Topo--;  //Ser� decrementada a vari�vel Topo para indicar o
                 //o novo elemento no Topo da Pilha


                 //Repare que o m�todo Desempilhar n�o remove de fato o
                 //elemento da Pilha.

        return true;   //Retona verdadeiro, indicando que o elemento foi removido
     }
     else  //caso a Pilha esteja vazia
       return false;  //Retona falso, indicando que nenhum elemento foi removido (N�o h� Elemento para ser removido, a Pilha est� vazia)
}


//M�todo para retornar o elemento no topo da Pilha sem Desempilha-lo
//O m�todo retorna verdadeiro se a Pilha cont�m algum elemento e
//falso caso a Pilha esteja vazia
//O elemento � retornado por refer�ncia pelo par�metro da fun��o
bool Pilha_Topo(TipoDado &Elemento)
{
     if(!Pilha_Vazia())  //primeiro deve-se conferir se a Pilha n�o est� vazia
     {
        Elemento = Pilha[Topo];  //assim como no m�todo Desempilhar, o elemento no topo da pilha
                                 //est� no �ndice indicado pela vari�vel Topo
                                 //Repare que aqui n�o � feito Topo--, o que iria "remover" o elemento da Pilha
        return true;
     }
     else //caso a Pilha esteja vazia
          return false;  //retorna falso, indicando que n�o foi poss�vel retornar o elemento
}
