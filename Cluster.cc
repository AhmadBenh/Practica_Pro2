#include "Cluster.hh"
using namespace std;

Cluster::Cluster() {

}

void Cluster::configurar_cluster(int n) {
    // 1: vector
    // 2: n_max
    vector<int> n_proc(n);
    read_bintree_int(claster,0);
    for (int i = 0; i < n; ++i) {
        n_proc[i] = claster.value();
    }
}

void Cluster::consultar_procesador(int idprocesador){
    bool found = false;
    int i = 0;
    while (i < Proc.size() and not found) {
        if (i == idprocesador) {
            found = true;
            cout << "Procesador " << idprocesador << endl;

            if (not Proc[i].processes_in().empty()) {
                for (int j = 0; j < Proc[i].processes_in().size(); ++j) {
                    cout << "  " << j << ' ';
                    Proc[i].processes_in()[j].escribir_proceso();
                }
            }
        }
        else ++i;
    }
}

void Cluster::poner_proceso_en_procesador(int id, Proceso proceso, Cjt_Usuarios conj){
    if(conj.existe_usuario(proceso.consultar_idusu())){
        int i = 0;
        bool found = false;
        while (i < Proc.size() and not found) {
            if (id == Proc[i].get_processorId()) {
                found = true;
                if (Proc[i].processes_in().empty()) {
                    Proc[i].add_process_empty(proceso);
                }
                else {
                    Proc[i].add_process(proceso);
                    //consultor memoria procesador
                    

                }
            }
        }
        else ++i;
        // vector de procesos vacio
            //Proc[0].processes_in().push_back();
            
        // vector de procesos no vacio
    }
}

void Cluster::quitar_proceso_en_procesador(int idproceso, int idprocesador){

}

void Cluster::avanzar_tiempo(int n){

}

