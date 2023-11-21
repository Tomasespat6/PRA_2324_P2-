#include <ostream>
#include <vector>

using namespace std;
template <typename T>

BusquedaBinaria(int X, vector<T>& V, int ini, int fin){
        if(ini > fin) 
           cout << "No se encuentra el array" << endl;
	
        int medio = (ini + fin) / 2;
        if (V[medio] == X) 
                 return medio;

        else if(V[medio] > X)
                 return BusquedaBinaria(X, V, ini, medio – 1)
        
	else
                 return BusquedaBinaria(X, V, medio + 1, fin)

}
