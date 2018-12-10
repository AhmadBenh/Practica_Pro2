#include "Cjt_Usuarios.hh"
using namespace std;

Cjt_Usuarios::Cjt_Usuarios() {
	list<Usuario> l_usu();
}

void Cjt_Usuarios::consultar_usuario(string id) {
    /*Usuario U;
	bool found = false;
    string aux;
	list<Usuario>::iterator it = l_usu.begin();
    while(it != l_usu.end() and not found){
        if(id == l_usu[it].consultar_usuario()) {
            aux = it;
            found = true;
        }
        else --it;
    }
    cout << U.size_l_proceso(l_usu[aux]);
    cout << U.consultar_procesos(l_usu[aux]) << endl;*/
    bool found = false;
    list<Usuario>::iterator it = l_usu.begin();
    
    while (it != l_usu.end() and not found) {
        if (id == it->consultar_usuario()) found = true;
        else ++it;
    }
    
    if (found) {
        cout << it->lista_procesos_pendientes().size();
        cout << ' ' << it->lista_procesos_pendientes().begin()->consultar_id();
    }
}

bool Cjt_Usuarios::existe_usuario(string id){
    list<Usuario>::iterator it = l_usu.begin();
    while(it != l_usu.end()){
        if(it->consultar_usuario() == id) return true;
        else ++it;
    }
    return false;
}


void Cjt_Usuarios::poner_usuario(string id){
    if (not existe_usuario(id)) {
        list<Usuario>::iterator it = l_usu.end();
        Usuario u(id);
        l_usu.insert(it,u);
    }
}

void Cjt_Usuarios::quitar_usuario(string id){
    list<Usuario>::iterator it = l_usu.begin();
    while(it != l_usu.end()){
        if (id == it->consultar_usuario() and it->lista_procesos_pendientes().empty()) {
            l_usu.erase(it);
        }
        else ++it;
    }
}

list<Usuario> Cjt_Usuarios::lista_usuario() {
      return l_usu;
}
  
void Cjt_Usuarios::escribir_conjunto() {
    list<Usuario>::iterator it = l_usu.begin();
    int i = 0;
    while(it != l_usu.end()) {
        if (i != it->lista_procesos_pendientes().size()) {
        it->posicion_l()->escribir_proceso();
        }
    }
}

Cjt_Usuarios::~Cjt_Usuarios() {}


