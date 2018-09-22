#ifndef LDE_H
#define LDE_H

#include<QMessageBox>
#include<cstdlib>
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

        primeiro=novo;
        return true;


    }

};

#endif // LDE_H
