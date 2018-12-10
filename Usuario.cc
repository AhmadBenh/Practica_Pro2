#include "Usuario.hh"
using namespace std;

Usuario::Usuario() {
	string iduser = "empty";
	list<Proceso> l_proceso;
    Proceso P;
}

Usuario::Usuario(string iduser) {
	this->iduser = iduser;
}

string Usuario::consultar_usuario() {
	return u.iduser;
}

list<Proceso> Usuario::lista_procesos_pendientes() {
    return l_proceso;
}

bool Usuario::busca_l_proceso(Proceso& p){
    bool found = false;
    list<Proceso>::iterator it = l_proceso.begin();
    while(it != l_proceso.end() and not found){
        if(iduser == it->consultar_idusu()) found = true;
    }
    if(found) return true;
    else return false;
}

void Usuario::poner_proceso_en_usuario(string iduser, Proceso& p) {
    list<Proceso>::iterator it = l_proceso.begin();
    bool found = false;
    while(it != l_proceso.end() and not found) {
        if (it->consultar_idusu() == iduser) {
            found = true;
        }
        else ++it;
    }
    if (found) {
        it = l_proceso.end();
        l_proceso.insert(it,p);
    }
}
