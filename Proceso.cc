#include "Proceso.hh"
using namespace std;

Proceso::Proceso(){
    idpro = 0;
    string idusu = "empty";
    mem = 0;
    time = 0;
}

Proceso::Proceso(int idprocesador, string iduser, int mem, int t){
    idpro = idprocesador;
    idusu = iduser;
    this->mem = mem;
    time = t;
}

int Proceso::consultar_id() const {
    return idpro;
}

string Proceso::consultar_idusu() const {
    return idusu;
}

int Proceso::consultar_memo() const {
    return mem;
}

int Proceso::consultar_time() const {
    return time;
}

void Proceso::escribir_proceso() {
    cout << idusu << ' ' << idpro << ' ' << mem << ' ' << time << endl;
}

Proceso::~Proceso(){}


