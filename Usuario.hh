/** @file usuario.hh
    @brief Especificación de la clase Usuario
*/

#ifndef _USUARIO_HH_
#define _USUARIO_HH_

#include "Proceso.hh"

#ifndef NO_DIAGRAM
#include <list>
#include <string>
#endif

/** @class Usuario
    @brief 
*/

class Usuario {
private:
    
    string iduser;     //identificador de usuario con minusculas y numeros 
    list<Proceso> l_proceso;  //estructura de los procesos pendientes de un usuario                                                                                                          asegurarnos de no llegar a llenar la cola de procesos*/
    
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
  string Usuario::consultar_usuario();

  /** @brief Consultora. 
      @pre <em>cierto</em>
      @post Devuelve la cantidad de procesos pendientes del usuario.
      @coste Constante
  */ 
  int Usuario::size_l_proceso();

  /** @brief Consultora. 
      @pre <em>cierto</em>
      @post Devuelve la cantidad de procesos pendientes del usuario.
      @coste Constante
  */ 
  bool Usuario::busca_l_proceso(Proceso& p);

  /** @brief Modificadora de los procesos pendientes
      @pre proceso tiene que existir
      @post Devuelve el usuario anterior con el proceso "proceso" en estado pendiente
      @coste Constante
  */ 
  void poner_proceso_en_usuario(string iduser, Proceso& p);
  
  //Destructoras
  /** @brief Destructora por defecto. 
      @pre <em>cierto</em>
      @post Devuelve un usuario eliminado.
      @coste Constante
  */ 
  ~Usuario();
};

#endif


