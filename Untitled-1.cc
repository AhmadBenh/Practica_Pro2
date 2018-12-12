id_procesador {
    que procesador es
}

memoria {
    Pr.mem = 100

    cuantos procesos caben:
        p1-> m=10, t=10
        p2-> m=20, t=20
        p3-> m=30, t=50
        p4-> m=90, t=1000
    
    instante 0 -- <>
    i 1 -- <p1> Pr.mem != 100 -- 90
    !!no se puede modificar la memoria del procesador!!
    i 2 -- <p1,p2> Pr.mem = 70
    i 3 -- <p1,p2,p3> Pr.mem = 40
    i 4 -- <p1,p2,p3> p4->no entra

    av.tiempo = 20;

    p1 p1.tiempo - av.tiempo < 0? p1.tiempo = -1; [0].espacio-libre(10)
    p2 p1.t - av.t < 0? p2.t = -1 [1].e.l(20)
    p3 p3.t = 10
    <10,20,p3,40>
    (p5(m.30)
    <10,20,30,40>
    posiciones solo se van con pop_back();
    10, 20 --> final -- pop <p3,70>
    <p3,p5,40>)
    eliminar procesos en avanzar tiempo
    i 5 -- <p3,p4>

    avanzar tiempo;

}

tiempo