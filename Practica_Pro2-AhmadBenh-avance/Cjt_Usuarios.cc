#include "Cjt_Usuarios.hh"
using namespace std;

Cjt_Usuarios::Cjt_Usuarios() {
	list<Usuario> l_usu();
}

void Cjt_Usuarios::consultar_usuario(string id) {
    Usuario U;
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
    cout << U.consultar_procesos(l_usu[aux]) << endl;
}


void Cjt_Usuarios::poner_usuario(string id){
     Usuario U;
     U.iduser = id;
     bool found = false;
     list<Usuario>::iterator it = l_usu.begin();
     while(it != l_usu.end() and not found){
         if(id == l_usu[it].consultar_usuario()){
             found = true;
        }
    }
    ++it;
    if(found == false) l_usu.insert(it, U);
}

void Cjt_Usuarios::quitar_usuario(string id){
    Usuario U;
    bool found = false;
    list<Usuario>::iterator it = l_usu.begin();
    while(it != l_usu.end() and not found){
        if(id == l_usu[it].consultar_usuario() and l_usu[it].size_l_proceso() == 0){
            l_usu.erase(it);
            found == true;
        }
    }
}

void Cjt_Usuarios::enviar_proceso_a_usuario(Proceso proceso){
    Usuario u;
    bool found = false;
    
}

