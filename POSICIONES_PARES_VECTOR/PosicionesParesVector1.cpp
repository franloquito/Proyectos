#include <iostream>
using namespace std;
int main() {
    int numeros[20];
    int i;
    for (i=0 ; i<20 ; i++) {
        cout << "Ingrese un numero en la posicion " << i << " --->";
        cin>> numeros[i];
     }
    for (i = 0; i < 20; i++) {
        if(i % 2 == 0) {
            cout << numeros[i] << " ";
        }
    }

    return 0;
}