#include <stdio.h> //Es la biblioteca estándar de entrada/salida de "C" que habilita la mayoría de comandos

int main() { //Aquí comienza el programa como tal
    int numero; //Se define como entero la variable para el número que ingrese el usuario
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    //Se aplica un condicional para analizar si el número escrito es o no es múltiplo de 3
    if (numero % 3 == 0) {
        printf("El numero %d es multiplo de 3\n", numero);
    } else { //Si NO es múltiplo de 3, aparece éste mensaje
        printf("El numero %d NO es multiplo de 3\n", numero);
    }

    return 0; //Devuelve toda la información
}
