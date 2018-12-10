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

string Usuario::identificador_usuario() {
	return iduser;
}

int Usuario::size_l_proceso(){
    return l_proceso.size();
}

bool Usuario::busca_l_proceso(Proceso& p){
    bool found = false;
    list<Proceso>::iterator it = l_proceso.begin();
    while(it != l_proceso.end() and not found){
        if(it->consultar_id() == p.consultar_id()) found = true;
        else found = false;
    }
    if(found) return true;
    else return false;
}

void Usuario::poner_proceso_en_usuario(string iduser, Proceso& p) {
    list<Proceso>::iterator it = l_proceso.begin();
    bool found = false;
    while(it != l_proceso.end() and not found) {
        if (it->consultar_id() == iduser) {
            found = true;
            l_proceso.insert(it,p);
        }
        else ++it;
}
