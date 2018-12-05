/**
 * @mainpage Práctica otoño 2018: Práctica Pro2.
*/

/** @file pro2.cc
    @brief Programa principal para el ejercicio <em>Práctica Pro2</em>.
*/


#include "Cjt_Usuarios.hh"
#include "cluster.hh"
#ifndef NO_DIAGRAM
#endif

/** @brief Programa principal para el ejercicio <em>Práctica Pro2</em>.
*/

int main() {
    Conj_Usuarios cusu;
    cluster c;
    string s;
    cin >> s;
    while (s != "acabar") {
        if (s == "configurar_cluster"){
            int nump, conex, mem;
            cin >> nump;
            while (cin >> conex >> mem) {
                c.configurar_cluster(nump, conex, mem);
            }
        }
        else if (s == "poner_usuario") {
            string id;
            cin >> id;
            cusu.poner_usuario(id);
        }
        else if (s == "quitar_usuario") {
            string id;
            cin >> id;
            cusu.quitar_usuario(id);
        }
        else if (s == "poner_proceso_en_procesador") {
            int idprocesador, idproceso, memoria, tiempo;
            string idusuario;
            cin >> idprocesador >> idproceso >> idusu >> mem >> tiempo;
            Proceso p(idproceso, idusu, mem, tiempo);
            c.poner_proceso_en_procesador(int idprocesador, p);
        }
        else if (s == "quitar_proceso_de_procesador") {
            int idproceso, idprocesador;
            cin >> idproceso >> idprocesador;
            c.quitar_proceso_de_procesador(idproceso, idprocesador);
        }
        else if (s == "enviar_proceso_a_usuario") {
            int idproceso, memoria, tiempo;
            string idusuario;
            cin >> idproceso >> idusu >> mem >> tiempo;
            Proceso p(idproceso, idusu, mem, tiempo);
            cusu.enviar_proceso_a_usuario(p); 
        }
        else if (s == "consultar_usuario") {
            string idusuario;
            cin >> idusuario;
            cusu.consultar_usuario(idusuario);
        }
        else if (s == "avanzar_tiempo") {
            int time;
            cin >> time;
            c.avanzar_tiempo(time);
        }
        else if (s == "consultar_procesador") {
            int idprocesador;
            cin >> idprocesador;
            c.consultar_procesador(idprocesador);
        }
        else if (s == "enviar_procesos_a_cluster") {
            int n;
            cin >> n;
            c.enviar_proceso_a_cluster(n);
        }
    }
}
    
