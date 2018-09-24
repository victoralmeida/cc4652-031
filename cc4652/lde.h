#ifndef LDE_H
#define LDE_H

#include<QMessageBox>
#include<cstdlib>
#include<iostream>

#include "no.h"
using namespace std;

class Lde{
private:
    No *primeiro;

public:
    Lde():primeiro(NULL){}

    bool insere(QString nome, QString cpf, QString telefone, int dia, int mes, int ano){
        No*n = this->busca(cpf);
        if(n->getAno()!=0)//Impede a criação de dois cliente com o msm CPF
            return false;

        No *novo = new No(nome, cpf, telefone, dia, mes, ano);
        if(!novo){
           return false;
        }

        No* anterior = NULL;
        No* atual = primeiro;

        while(atual!=NULL){
          anterior = atual;
          atual = atual->proximo;
        }

        if(anterior)
          anterior->proximo = novo;
        else
          primeiro = novo;

        novo->proximo = atual;
        return true;


    }


    No* busca(QString valor){

      No* a=primeiro;
      while(a){
        if(a->getCPF()==valor)
          return a;
        a=a->proximo;
      }

      a = new No("CLIENTE NÃO ENCONTRADO", "", "", 0, 0,0 );
      return a;

    }

    bool remove(QString valor){
      if(!primeiro)
          return false;

      bool cond=false;

      No* anterior = NULL;
      No* atual=primeiro;

      if(atual->getCPF() == valor){
        primeiro = atual->proximo;
        delete atual;//Destói No removido da lista
        return true;
      }

      while(atual){
        if(atual->getCPF()==valor){
          cond=true;
          break;
        }
        anterior = atual;
        atual=atual->proximo;
      }

      if(cond){
        anterior->proximo = atual->proximo;
        delete atual; //Destói No removido da lista
        return true;
      }else{
        //cout<<endl<<"Função remoção: valor "<<valor<< " não encontrado"<<endl;
        return false;
      }

    }



};

#endif // LDE_H
