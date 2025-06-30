#include <stdio.h> //Es la biblioteca estándar de entrada/salida de "C" que habilita la mayoría de comandos.

int main() { //Aquí comienza el programa como tal.
    int numeros[20]; // Aquí se estableció la cantidad de 20 posiciones, entre corchetes, que tendrá el Vector disponibles para escribir. Va del 0 al 19.
    int i; //Se define como entero la variable para el índice.

    //Un bucle "for" para pedir 20 números. Por cada número escrito avanza la iteración hasta llegar a la 20.
    for (i = 0; i < 20; i++) {
        printf("Ingrese el numero en la posicion %d: ", i);
        scanf("%d", &numeros[i]); //Se guarda cualquier número por posición.
    }

    printf("\n Numeros en posiciones pares:\n");

    //Otro bucle for para mostrar organizadamente las posiciones pares del vector y los números que en ellas fueron escritos.
    for (i = 0; i < 20; i++) {
        if (i % 2 == 0) { //Un condicional "if", sin parte "else", para mostrar solo las posiciones pares dividiendo las iteraciones por 2.
            printf("Posicion %d: %d\n", i, numeros[i]);
         }
    }

    return 0; //Devuelve toda la información.
}
