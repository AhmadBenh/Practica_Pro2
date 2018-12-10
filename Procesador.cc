#include "Procesador.hh"
#include "Proceso.hh"
#include "Cjt_Usuarios.hh"
using namespace std;

Procesador::Procesador() {
	idprocesador = 0;
	mem = 0;
	list<Proceso> procesos();
}

Procesador::Procesador(int idprocesador, int mem) {
	this->idprocesador = idprocesador;
	this->mem = mem;
}

void Procesador::consultar_procesador(int idprocesador){
	Procesador p;
	p.idprocesador = idprocesador;
	Proceso test;
	for(list<Proceso>::iterator it = procesos.begin(); it < procesos.end(); ++it){
		test = *it;
		cout << test.consultar_id() << ' ' << test.consultar_idusu() << ' ' << test.consultar_mem() << ' ' << test.consultar_time() << endl;
	}	
}

void Procesador::poner_proceso_en_procesador(int id, Proceso proceso){
	
}

void Procesador::quitar_proceso_en_procesador(int idproceso, int idprocesador){

}

void get_available_positions(){

}

int Procesador::get_processorId() const{
	return idprocesador;
}