/** @file usuario.hh
    @brief Especificación de la clase Usuario
*/

#ifndef _USUARIO_HH_
#define _USUARIO_HH_

#include "Proceso.hh"

#ifndef NO_DIAGRAM
#include <queue>
#include <string>
using namespace std;
#endif

/** @class Usuario
    @brief 
*/

class Usuario {
private:
    
    string iduser;     //identificador de usuario con minusculas y numeros 
    queue<Proceso> c_proc_pend;  //estructura de los procesos pendientes de un usuario                                                                                                          
    Proceso P;
    
public: 

  //Constructoras
  /** @brief Creadora por defecto. 
      @pre <em>cierto</em>
      @post Devuelve un usuario vacio.
      @coste Constante
  */ 
  Usuario();
  
  /** @brief Creadora con valores 
      @pre <em>cierto</em>
      @post Devuelve un usuario con id "usu".
      @coste Constante
  */ 
  Usuario(string iduser);

  //Constructoras
  /** @brief Consultora. 
      @pre <em>cierto</em>
      @post Devuelve id del usuario consultado.
      @coste Constante
  */ 
  string consultar_usuario();

  /** @brief Consultora. 
      @pre <em>cierto</em>
      @post Devuelve la cantidad de procesos pendientes del usuario.
      @coste Constante
  */ 
  queue<Proceso> procesos_pendientes();

  /** @brief Consultora. 
      @pre <em>cierto</em>
      @post Devuelve la cantidad de procesos pendientes del usuario.
      @coste Constante
  */ 
  bool busca_c_proceso(Proceso& p);

  /** @brief Modificadora de los procesos pendientes
      @pre proceso tiene que existir
      @post Devuelve el usuario anterior con el proceso "proceso" en estado pendiente
      @coste Constante
  */ 
  void proceso_a_usuario(string iduser, Proceso& p);
  
  void meter_proceso(Proceso& p);
  
  void escribir_usuario();
   
  //Destructoras
  /** @brief Destructora por defecto. 
      @pre <em>cierto</em>
      @post Devuelve un usuario eliminado.
      @coste Constante
  */ 
  ~Usuario();
};

#endif


