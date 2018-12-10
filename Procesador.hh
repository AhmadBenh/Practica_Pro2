/** @file Procesador.hh
    @brief Especificación clase Procesador
*/

#ifndef _PROCESADOR_HH_
#define _PROCESADOR_HH_

#include "Proceso.hh"

#ifndef NO_DIAGRAM
#include <list>
#endif

/** @class Procesador
    @brief 
*/

class Procesador {
private: 
    
    int idprocesador;       //identificador del procesador
    int mem;     //numero de espacios de memoria del procesador
    list<Proceso> procesos;     //estructura de la memoria del procesador
    
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

  //Consultoras
  /** @brief Escribe la información del procesador
   *  @pre idenproce > 0
   *  @post Escribe los datos de los procesos activos en el procesador con id "idprocesador"
   *  @coste Lineal dependiendo de la busqueda que se haga en el arbol, en el procesador y en la memoria de este
  */
  void consultar_procesador(int idprocesador);

  void get_processorId();

  //Modificadoras  
  /** @brief Modifica el procesador añadiendo un proceso
   *  @pre id > 0, proceso tiene que existe
   *  @post Devuelve el proceso anterior con el nuevo proceso si cabe en el procesador
   *  @coste Lineal en proporción al tamaño que ocupa el proceso si cabe en el procesador
  */
  void poner_proceso_en_procesador(int id, Proceso proceso);

  /** @brief Modifica el procesador quitando un proceso.
   *  @pre id > 0
   *  @post El resultado es el proceso anterior sin el proceso con id "idproceso" del procesador con id "idprocesador" (en caso de que esté en el procesador).
   *  @coste Lineal en proporción al tamaño que ocupa el proceso si está en el procesador.
  */ 
  void quitar_proceso_en_procesador(int idproceso, int idprocesador);

  void get_available_positions();

  void add_process();

  //Destructoras
  
  /** @brief Destructora por defecto
      @pre <em>cierto</em>
      @post Devuelve la destruccion de un proceso
      @coste Lineal en proporción al tamaño de memoria
  */
  ~Procesador();

};

#endif