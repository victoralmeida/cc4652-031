#ifndef NO_H
#define NO_H

#include<cstdlib>
using namespace std;

class No{
private:
  QString nome;
  QString cpf;
  QString telefone;
  int dia;
  int mes;
  int ano;


public:
  No(QString nome, QString cpf, QString telefone, int dia, int mes, int ano){
      nome =nome;
      cpf=cpf;
      telefone=telefone;
      dia=dia;
      mes=mes;
      ano=ano;
  }


  No* proximo;

};

#endif // NO_H
