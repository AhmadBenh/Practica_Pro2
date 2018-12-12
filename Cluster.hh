#ifndef _CLUSTER_HH_
#define _CLUSTER_HH_

#include "Procesador.hh"
#include "Cjt_Usuarios.hh"
#include <iostream>

#ifndef NO_DIAGRAM
#include "BinTreeIOint.hh"
#include <vector>
using namespace std;
#endif

/** @class Cluster
 *  @brief
*/


class Cluster {
    
private:

    /* cantidad de procesadores del cluster */
    int num_proc; 
    /* estructura del cluster */
    BinTree<int> claster;
    vector<Procesador> Proc;


public:

    // Constructora

  /** @brief Creadora por defecto del Cluster
   * @pre cierto
   * @post Devuelve un cluster vacío
  */
    Cluster();
  
  //Destructora
  /** @brief Destructora por defecto
   * @pre cierto
   * @post Devuelve un cluster vacío
   * @coste Constante
  */
  ~Cluster();

  //Consultoras
  /** @brief Escribe la información del procesador
   *  @pre idenproce > 0
   *  @post Escribe los datos de los procesos activos en el procesador con id "idprocesador"
   *  @coste Lineal dependiendo de la busqueda que se haga en el arbol, en el procesador y en la memoria de este
  */
  void consultar_procesador(int idprocesador);

  //Modificadoras  
  /** @brief Modifica el procesador añadiendo un proceso
   *  @pre id > 0, proceso tiene que existe
   *  @post Devuelve el proceso anterior con el nuevo proceso si cabe en el procesador
   *  @coste Lineal en proporción al tamaño que ocupa el proceso si cabe en el procesador
  */
  void poner_proceso_en_procesador(int id, Proceso proceso, Cjt_Usuarios cjnt);

  /** @brief Modifica el procesador quitando un proceso.
   *  @pre id > 0
   *  @post El resultado es el proceso anterior sin el proceso con id "idproceso" del procesador con id "idprocesador" (en caso de que esté en el procesador).
   *  @coste Lineal en proporción al tamaño que ocupa el proceso si está en el procesador.
  */ 
  void quitar_proceso_en_procesador(int idproceso, int idprocesador);

  //Modificadoras  
  /** @brief Configura el cluster y lo inicializa   
   *  @pre El parámetro implícito no está inicializado, pmax>0
   *  @post El resultado es un cluster con n procesadores(nodos), las conexiones y el tamaño de memoria para cada procesador
  */
  void configurar_cluster(int n);
        
  /** @brief Modifica el cluster poniendo procesos
   *  @pre n > 0
   *  @post El resultado es el cluster anterior pero con los n procesos que quepan en los procesadores
  */
  void enviar_procesos_a_cluster(int n); 
  
  /** @brief Modifica el tiempo
   *  @pre n > 0
   *  @post Devuelve el cluster anterior habiendo avanzado n unidades de tiempo. Si algún proceso acaba durante este tiempo, sale del respectivo procesador
  */
  void avanzar_tiempo(int n);

      
};

#endif
