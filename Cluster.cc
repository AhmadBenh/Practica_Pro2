#include "Cluster.hh"
using namespace std;

Cluster::Cluster() {

}

void Cluster::configurar_cluster(int n) {
    // 1: vector
    // 2: n_max
    vector<int> n_proc(n);
    read_bintree_int(claster,0);
    for (int i = 0; i < n; ++i) {
        n_proc[i] = claster.value();
    }
}


