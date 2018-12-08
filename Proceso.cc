#include "Proceso.hh"
using namespace std;

Proceso::Proceso(){
    string idpro = "empty";
    string idusu = "empty";
    int mem = 0;
    int time= 0;
}

Proceso::Proceso(string idprocesador, string iduser, int mem, int t){
    this->idpro = idprocesador;
    this->idusu = iduser;
    this->mem = mem;
    this->time = t;
}

const string Proceso::consultar_id() const {
    return idpro;
}

const string Proceso::consultar_idusu() const {
    return idusu;
}

const int Proceso::consultar_mem() const {
    return mem;
}

const int Proceso::consultar_time() const {
    return time;
}


