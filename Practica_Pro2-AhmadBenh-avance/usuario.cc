#include "usuario.hh"
using namespace std;

Usuario::Usuario() {
	string iduser = "empty"
	list<Proceso> l_proceso;
    Proceso P;
}

Usuario::Usuario(string iduser) {
	this->iduser = iduser;
}

string Usuario::consultar_usuario() {
	return iduser;
}

Usuario::size_l_proceso(){
    return l_proceso.size();
}

void Usuario::poner_proceso_en_usuario(int iduser, Proceso& p) {
    list<Proceso>::iterator it = l_proceso.b<gin();
    bool find = false;
    while(it != l_proceso.end() and not find) {
        if (it->consultar_id() == id_user) {
            find = true;
            l_proceso.insert(it,p);
        }
        else ++it;
}
