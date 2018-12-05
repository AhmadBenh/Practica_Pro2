#include "Cjt_usuarios.hh"
using namespace std;

Cjt_usuarios::Cjt_Usuarios() {
	list<Usuario> l_usu();
}

void Cjt_usuarios::consultar_usuario(string id) {
    Usuario U;
	bool found = false;
    string aux;
	list<Usuario>::iterator it = l_usu.end();
    while(it != l_usu.end() and not found){
        if(id == l_usu[it].consultar_usuario()) {
            aux = it;
            found = true;
        }
    }
    cout << U.size_l_proceso(l_usu[aux]);
    cout << U.consultar_procesos(l_usu[aux]) << endl;
}
