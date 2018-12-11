#include "Usuario.hh"
using namespace std;

Usuario::Usuario() {
	string iduser = "empty";
	queue<Proceso> c_proc_pend;
    Proceso P;
}

Usuario::Usuario(string iduser) {
	this->iduser = iduser;
}

string Usuario::consultar_usuario() {
	return iduser;
}

queue<Proceso> Usuario::procesos_pendientes() {
    return c_proc_pend;
}

bool Usuario::busca_c_proceso(Proceso& p){
    bool found = false;
    int i = 0;
    while(i != c_proc_pend().size() and not found){
        if(p.consultar_idusu() == i->consultar_idusu()) found = true;
    }
    if(found) return true;
    else return false;
}

void Usuario::proceso_a_usuario(string iduser, Proceso& p) {
    bool found = false;
    int i = 0;
    while(i != c_proc_pend().size() and not found) {
        if (i->consultar_idusu() == iduser) {
            found = true;
        }
        else ++it;
    }
    if (not found) meter_proceso(p);
}

void Usuario::meter_proceso(Proceso& p) {
    c_proc_pend.push(p);
}

void Usuario::escribir_usuario(){
    while(not procesos_pendientes().empty()){
        procesos_pendientes().front().escribir_proceso();
        procesos_pendientes().pop();
    }
}

Usuario::~Usuario() {}
