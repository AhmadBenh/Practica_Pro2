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
    Usuario u;
	return u.iduser;
}

int Usuario::size_l_proceso(){
    Usuario u;
    return u.l_proceso.size();
}

bool Usuario::busca_l_proceso(Proceso& p){
    bool found = false;
    list<Proceso>::iterator it = l_proceso.begin();
    while(it != l_proceso.end() and not found){
        if()
    }
    if(found) return true;
    else return false;
}

void Usuario::poner_proceso_en_usuario(string iduser, Proceso& p) {
    list<Proceso>::iterator it = l_proceso.begin();
    bool find = false;
    while(it != l_proceso.end() and not find) {
        if (it->consultar_id() == iduser) {
            find = true;
            l_proceso.insert(it,p);
        }
        else ++it;
}
