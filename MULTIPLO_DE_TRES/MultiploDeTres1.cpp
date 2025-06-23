#include <iostream>
using namespace std;
int main() {
    int numero; 
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 3 == 0) {
        cout << "El numero que ingreso es multiplo de 3. " << endl;
    } else {
        cout << "El numero que ingreso no es multiplo de 3. " << endl;
    }
    return 0;
}

