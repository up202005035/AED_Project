#ifndef AVIAO_H
#define AVIAO_H

#include "voo.h"
#include "defs.h"
#include "servico.h"




class Aviao {
    string const matricula;
    int const capacidade;
    list<Voo> planoVoo;
    list<Servico> servicosCompletos;
    queue<Servico> servicosParaRealizar;

public:
    Aviao(string m, int c, list<Voo> planoVoo);
    int getCapacidade() const;
    string getMatricula() const;
    list<Voo> getPlanoVoo() const;
    Servico getProximoServico() const;
    void addVoo(Voo v);
    void addServicoRealizar(Servico &s);
    void addServicoCompleto(Servico s);
};


#endif //PROJECT_AVIÃO_H
