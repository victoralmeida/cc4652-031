#ifndef NOLDDE_H
#define NOLDDE_H

#include<iostream>
#include<cstdlib>

#include "no.h"

class NoLdde{

public:
  NoLdde(No*cliente, QString diaCI, QString hhCI, QString diaCO, QString hhCO): prx(NULL), ant(NULL){
    cliente=cliente;
    diaCI=diaCI;
    diaCO=diaCO;
    hhCI=hhCI;
    hhCO=hhCO;
  }


  No*cliente;
  NoLdde*prx;
  NoLdde*ant;

  QString diaCI;
  QString hhCI;
  QString diaCO;
  QString hhCO;

  QString getCpfCliente(){
    return cliente->getCPF();
  }

  QString getClienteNome(){
      return cliente->getNome();
  }


};

#endif // NOLDDE_H
