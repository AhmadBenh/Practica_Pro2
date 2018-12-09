#ifndef _CLUSTER_HH_
#define _CLUSTER_HH_

#include "Procesador.hh"
#include "Cjt_Usuarios.hh"
#include <iostream>

#ifndef NO_DIAGRAM
#include "BinTree.hh"
using namespace std;
#endif

/** @class Cluster
 *  @brief
*/


class cluster {
    
private:

    /* cantidad de procesadores del cluster */
    int num_proc; 
    /* estructura del cluster */
    BinTree</*int*/Procesador> cluster;
    //vector<Procesador> Proc;


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

  //Modificadoras  
  /** @brief Configura el cluster y lo inicializa   
   *  @pre El parámetro implícito no está inicializado, pmax>0
   *  @post El resultado es un cluster con n procesadores(nodos), las conexiones y el tamaño de memoria para cada procesador
  */
  void configurar_cluster(int n, int conex, int tmem);
        
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
