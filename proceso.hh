/** @file proceso.hh
    @brief Especificación clase Proceso
*/

#ifndef _PROCESO_HH_
#define _PROCESO_HH_

#ifndef NO_DIAGRAM
#include <iostream>
#include <string>
#endif

/** @class Proceso
    @brief 
*/

class Proceso {
private: 
    
    string idpro; //identificador del proceso
    string idusu;  //identificador del usuario 
    int mem; //cantidad de espacios de memoria que ocupara el proceso
    int time; //unidades de tiempo que el proceso durará en el procesador
    
public: 
    //Constructoras
    /** @brief Creadora por defecto
        @pre cierto
        @post Devuelve un proceso vacío
        @coste Constante
    */
    Proceso();
    
    /** @brief Creadora con valores
        @pre idp > 0, idu tiene que existir, memoria > 0, t > 0
        @post Devuelve un proceso con id "proce", identificador de usuario "usu", ocupación de memoria "mem" y tiempo de ejecución "t"
        @coste Constante
    */ 
    Proceso(string idprocesador, string iduser, int mem, int t);
    
    /** @brief Consultora con valores
     *  @pre cierto
     *  @post Devuelve el identificador del proceso del parámetro implícito
     *  @coste constante
    */
    
    
    //Destructoras
    /** @brief Destructora por defecto
        @pre cierto
        @post Devuelve un proceso destruido
        @coste Constante
    */ 
    ~Proceso();
};

#endif
