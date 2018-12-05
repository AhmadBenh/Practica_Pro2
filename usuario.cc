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

Usuario::consultar_procesos(string id) {
    list<Proceso>::iterator it = l_proceso.end();
    --it;
    return P.consultar_id_proceso(*it);
}
