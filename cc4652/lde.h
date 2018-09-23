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
        No *novo = new No(nome, cpf, telefone, dia, mes, ano);
        if(!novo){
           return false;
        }

        No* anterior = NULL;
        No* atual = primeiro;

        while(atual!=NULL && atual->getCPF() < novo->getCPF() ){
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


    No* busca(int valor){

      No* a=primeiro;
      while(a && a->getCPF().toInt()<=valor){
        if(a->getCPF().toInt()==valor)
          return a;
        a=a->proximo;
      }

      a = new No("a", "a", "a", -1, -1, -1);
      return a;

    }



};

#endif // LDE_H
