#include "procesador.hh"
using namespace std;

Procesador::Procesador() {
	idprocesador = 0;
	mem = 0;
	list<proceso> procesos();
}

Procesador::Procesador(int idprocesador, int mem) {
	this->idprocesador = idprocesador;
	this->mem = mem;
}