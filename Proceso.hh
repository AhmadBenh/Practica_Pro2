/** @file proceso.hh
    @brief Especificación clase Proceso
*/

#ifndef _PROCESO_HH_
#define _PROCESO_HH_

#ifndef NO_DIAGRAM
#include <iostream>
#endif

/** @class Proceso
    @brief 
*/

class Proceso {
private: 
    
    int idpro; //identificador del proceso
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
    Proceso(int idprocesador, string iduser, int mem, int t);
    
    
    //Consultoras
    /** @brief Consultora con valores
     *  @pre cierto
     *  @post Devuelve el identificador del proceso del parámetro implícito
     *  @coste constante
    */
    const int consultar_id() const;

    /** @brief Consultora con valores
     *  @pre cierto
     *  @post Devuelve el identificador del usuario que contiene al proceso
     *  @coste constante
    */
    const string consultar_idusu() const;

    /** @brief Consultora con valores
     *  @pre cierto
     *  @post Devuelve la cantidad de memoria reservada para el proceso, en posiciones de memoria.
     *  @coste constante
    */
    const int consultar_mem() const;

    /** @brief Consultora con valores
     *  @pre cierto
     *  @post Devuelve el tiempo que necesitará el proceso, en unidades enteras de tiempo
     *  @coste constante
    */
    const int consultar_time() const; 
    
    
    //Destructoras
    /** @brief Destructora por defecto
        @pre cierto
        @post Devuelve un proceso destruido
        @coste Constante
    */ 
    ~Proceso();
};

#endif
