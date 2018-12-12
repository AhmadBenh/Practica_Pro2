#include "Procesador.hh"
#include "Proceso.hh"
#include "Cjt_Usuarios.hh"
using namespace std;

Procesador::Procesador() {
	idprocesador = 0;
	mem = 0;
	vector<Proceso> proc_procesos;
}

Procesador::Procesador(int idprocesador, int mem) {
	this->idprocesador = idprocesador;
	this->mem = mem;
}

Procesador::mem_proc(){
	return mem;
}

int Procesador::memoria_libre(){
    int memoria = 0;
	for (int i = 0; i < proc_procesos.size(); ++i) {
		sum += proc_procesos[i].consultar_memo();
	}
	return mem-sum;
}

int Procesador::posiciones_memoria(){
	// suficiente memoria?
	// como saco el proceso del vector
	int cont = 0;
	for(int i = 0; i < proc_procesos.size(); ++i){
		if(proc_procesos[i].consultar_memo()){
			++cont;
			return i;
		}
		else return 0;
	}
}

void Procesador::add_process_empty(Proceso p) {
	proc_procesos.push_back(p)
}

void Procesador::add_process(Proceso P) {
	proc_procesos[posiciones_memoria()] = p;
}

int Procesador::get_processorId() const{
	return idprocesador;
}

vector<Proceso> Procesador::processes_in() {
	return proc_procesos;
}
