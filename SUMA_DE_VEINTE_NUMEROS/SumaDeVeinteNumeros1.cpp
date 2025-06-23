#include <iostream>
using namespace std;
int main() {
    int i;
    double n, suma = 0;
    for (i = 0; i < 20; i++){ 
        cout << "Ingrese el numero " << i << ": ";
        cin >> n;
        suma = suma + n;
    }
    cout << "La suma de los veinte numeros que escribio da: "  << suma << endl;
    return 0;
}