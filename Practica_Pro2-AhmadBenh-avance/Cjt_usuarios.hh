/** @file Cjt_Usuarios.hh
    @brief Especificación de la clase Conj_Usuarios
*/

#ifndef _CJT_USUARIOS_HH_
#define _CJT_USUARIOS_HH_

#include "usuario.hh"
#ifndef NO_DIAGRAM
#include <list>
#include <string>
#endif

/** @class Conj_Usuarios
    @brief 
*/

class Cjt_usuarios {
private:
  list<Usuario> l_usu;     //estructura de datos del conjunto de usuarios
                                         
public:
  //Constructoras
  /** @brief Creadora por defecto
      @pre <em>cierto</em>
      @post Devuelve un conjunto de usuarios vacio
      @coste Constante
  */
  Cjt_Usuarios();
  
  //Destructoras
  /** @brief Destructora por defecto
      @pre <em>cierto</em>
      @post Devuelve la destrucción de un conjunto de usuarios
      @coste Constante
  */
  ~Cjt_Usuarios();
  
  //Consultoras
  /** @brief Consulta los procesos pendientes del usuario id 
      @pre id ha de estar formado por minúsculas(empezar por minúscula) y números
      @post Escribe el numero de procesos pendientes y el id del más antiguo. Si no existen procesos pendientes devuelve 0
      @coste Constante
  */ 
  void consultar_usuario(string id);
  
  //Modificadoras
  /** @brief Crea un usuario con identificador id
      @pre id ha de estar formado por minúsculas(empezar por minúscula) y números
      @post El resultado es un usuario con id de usuario "id". Si ya existe no pasa nada
      @coste Constante
  */ 
  void poner_usuario(string id);

  /** @brief Elimina usuario con identificador id
      @pre id ha de estar formado por minúsculas(empezar por minúscula) y números
      @post Deja de existir el usuario con identificador "id". Si no existe o tiene procesos pendientes no hace nada
      @coste Constante
  */ 
  void quitar_usuario(string id);
  
  /** @brief Modificadora de los procesos pendientes
      @pre proceso tiene que existir
      @post Devuelve el usuario anterior con el proceso "proceso" en estado pendiente
      @coste Constante
  */ 
  void enviar_proceso_a_usuario(Proceso proceso);
};

#endif
