//
// Created by jpedr on 17/12/2021.
//

#ifndef PROJECT_GERENCIARAEROPORTOS_H
#define PROJECT_GERENCIARAEROPORTOS_H
#include "Aeroporto.h"
#include "input.h"

class gerenciarAeroportos {
    list<Aeroporto> aeroportos;
public:
    gerenciarAeroportos();
    list<Aeroporto>& getAeroportos();
    void verAeroporto();
    void showAeroportos();
    void criarAeroporto();
    void adicionarAeroporto(Aeroporto aeroporto);
    void removerAeroporto();
    bool checkAeroporto(string id);
    void run();
};


#endif //PROJECT_GERENCIARAEROPORTOS_H
