/** @file Procesador.hh
    @brief Especificación clase Procesador
*/

#ifndef _PROCESADOR_HH_
#define _PROCESADOR_HH_

#include "Proceso.hh"

#ifndef NO_DIAGRAM
#include <vector>
#endif

/** @class Procesador
    @brief 
*/

class Procesador {
private: 
    
    int idprocesador;       //identificador del procesador
    int mem;     //numero de espacios de memoria del procesador
    vector<Proceso> proc_procesos;     //estructura de la memoria del procesador
    
public: 
    
  //Constructoras
  /** @brief Creadora por defecto 
      @pre <em>cierto</em>
      @post Devuelve un procesador vacio
      @coste Constante
  */ 
  Procesador();
  
  /** @brief Creadora con valores
      @pre id > 0 y memoria > 0
      @post Devuelve un procesador con identificador "id" y tamaño de memoria "mem"
      @coste Lineal en proporción al tamaño de la memoria
  */
  Procesador(int idprocesador, int mem);

  int memoria_libre();

  int posiciones_memoria();

  int get_processorId() const;

  void add_process_empty(Proceso p);

  void add_process(Proceso p);
  
  //Destructoras
  
  /** @brief Destructora por defecto
      @pre <em>cierto</em>
      @post Devuelve la destruccion de un proceso
      @coste Lineal en proporción al tamaño de memoria
  */

  vector<Proceso> processes_in();

  ~Procesador();

};

#endif
