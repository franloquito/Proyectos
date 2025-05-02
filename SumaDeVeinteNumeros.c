#include <stdio.h> //Es la biblioteca estándar de entrada/salida de "C" que habilita la mayoría de comandos

int main() { //Aquí comienza el programa como tal
    int i, numero, suma = 0; // Se definen como entero las variables para el índice, el número que ingrese el usuario y la suma total inicial

    // Bucle "for" para pedir 20 números
    for (i = 0; i < 20; i++) {
        printf("Ingrese el numero #%d: ", i + 1);
        scanf("%d", &numero); // Se guarda cualquiera que fuese el número que haya ingresado el usuario
        suma += numero; // Se acumula la suma
    }

    printf("La suma total de los 20 numeros es: %d\n", suma); // Muestra el resultado final

    return 0; // Devuelve toda la información
}
