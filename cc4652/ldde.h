#ifndef LDDE_H
#define LDDE_H

#include<iostream>
#include<cstdlib>

#include"no.h"
#include"no-ldde.h"

class Ldde{
private:
    int size;
    NoLdde* primeiro;
    NoLdde *ultimo;

public:
    Ldde():primeiro(NULL), size(0){}

    bool insere(No*cliente, QString diaCI, QString hhCI, QString diaCO, QString hhCO){
            NoLdde* novo = new NoLdde(cliente, diaCI, hhCI, diaCO, hhCO);

            if(!novo){
                //cout<<"N�o foi poss�vel criar novo"<<endl;
                return false;
            }

            NoLdde* anterior = NULL;
            NoLdde* atual = primeiro;

            while(atual){
                anterior = atual;
                atual = atual->prx;
            }
            if(anterior)
                anterior->prx = novo;
            else
                primeiro = novo;

            if(atual)
                atual->ant=novo;
            else
                ultimo= novo;

            novo->prx = atual;
            novo->ant = anterior;

            size++;
            return true;

  }

    NoLdde buscar(QString cpf){
        if(!primeiro){

            No* a= new No("CLIENTE NÃO ENCONTRADO", "", "", 0, 0,0 );
            NoLdde* b = new NoLdde(a, "", "", "", "");
            return *b;

        }

        if(primeiro->getCpfCliente() == cpf)
            return *primeiro;


    }



};
#endif // LDDE_H
