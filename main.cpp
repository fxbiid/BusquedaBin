#include <iostream>
#include <vector>
using namespace std;

int busquedaBinaria(const vector<int>& arr, int objetivo) {
    int izq = 0, der = arr.size() - 1;
    while (izq <= der) {
        int medio = (izq + der) / 2;
        // mejor caso encontrarlo en medio
        if (arr[medio] == objetivo) {
            return medio;
            // segundo caso ignoramos el lado izq
        }else if (arr[medio] < objetivo) {
            izq = medio + 1;
            //
        }else {
            der = medio - 1;
        }

    }
    return -1;
}

int main() {
vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int objetivo = 0;
    int num = busquedaBinaria(arr, objetivo);
    if (num > -1) {
        cout<< "encontrado en la posicion: "<< num << endl;
    }else {
        cout << "numero no encontrado" << endl;
    }

    //Complejidad Algorítmica:
    //Mejor caso: O(1)
    //Ocurre cuando el objetivo está justo en la posición de en medio en la primera iteración.

    //Peor caso: O(log n)
    //En cada iteración el algoritmo reduce el espacio de búsqueda a la mitad.
    //El número máximo de iteraciones cumple: n / 2^k = 1  =>  k = log2(n).
    //Por lo tanto la complejidad es logarítmica.



    return 0;
}
