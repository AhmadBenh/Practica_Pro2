#include "Cjt_Usuarios.hh"
using namespace std;

int main() {
    string id; int idp, mem, tiempo;
    Cjt_Usuarios cjt;
    Usuario u;
    cin >> id;
    cjt.poner_usuario(id);
    cin >> id >> idp >> mem >> tiempo;
    Proceso p(idp,id,mem,tiempo);
    u.poner_proceso_en_usuario(id,p);
    
}

/* to do: funciones de escritura para prueba cjt_Usuarios  */
