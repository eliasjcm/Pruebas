#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct jugador {
    char nombre[50];
    int edad;
    float altura;
};

void imprimirNombres(struct jugador listaJugadores[], int cantidadJugadores) {
    system("cls");
    for (int i = 0; i < cantidadJugadores; i++) {
        printf("%d. %s\n", i + 1, listaJugadores[i].nombre);
    }
    printf("\n");
    system("pause");
}

void imprimirEdades(struct jugador listaJugadores[], int cantidadJugadores) {
    system("cls");
    for (int i = 0; i < cantidadJugadores; i++) {
        printf("%d. %d\n", i + 1, listaJugadores[i].edad);
    }
    printf("\n");
    system("pause");
}

void imprimirAlturas(struct jugador listaJugadores[], int cantidadJugadores) {
    system("cls");
    for (int i = 0; i < cantidadJugadores; i++) {
        printf("%d. %f \n", i + 1, listaJugadores[i].altura);
    }
    printf("\n");
    system("pause");
}

int main() {
    setlocale(LC_ALL, "spanish");
    int cantidadJugadores = 3;
    struct jugador listaJugadores[cantidadJugadores];
    //char nombreActual[50];
    for (int i = 0; i < cantidadJugadores; i++) {
        printf("%d. Ingrese el nombre del jugador: ", i + 1);
        scanf("%s", listaJugadores[i].nombre);

        printf("%d. Ingrese la edad del jugador: ", i + 1);
        scanf("%d", &listaJugadores[i].edad);

        printf("%d. Ingrese la altura del jugador: ", i + 1);
        scanf("%f", &listaJugadores[i].altura);

        fflush(stdin);
        printf("\n");
    }

    int opcionUsuario;
    do {
        system("cls");
        printf("1. Listar jugadores por nombre.\n");
        printf("2. Listar jugadores por edad.\n");
        printf("3. Listar jugadores por altura.\n");
        printf("4. Terminar programa.\n\n");

        printf("\nIngrese la opción que desea: ");
        scanf("%d", &opcionUsuario);
        switch (opcionUsuario) {
            case 1:
                imprimirNombres(listaJugadores, cantidadJugadores);
                break;
            case 2:
                imprimirEdades(listaJugadores, cantidadJugadores);
                break;
            case 3:
                imprimirAlturas(listaJugadores, cantidadJugadores);
                break;
        }

    } while (opcionUsuario != 4);
    return 0;
}
