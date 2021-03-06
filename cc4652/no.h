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
  No(QString nomeP, QString cpfP, QString telefoneP, int diaP, int mesP, int anoP){
      nome =nomeP;
      cpf=cpfP;
      telefone=telefoneP;
      dia=diaP;
      mes=mesP;
      ano=anoP;
  }

  No* proximo;

  QString getNome(){
      return nome;
  }

  QString getCPF(){
      return cpf;
  }

  QString getTelefone(){
      return telefone;
  }

  int getDia(){
      return dia;
  }

  int getMes(){
      return mes;
  }
  int getAno(){
      return ano;
  }

};

#endif // NO_H
