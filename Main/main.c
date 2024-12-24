#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// Manejador personalizado para SIGTERM
void manejador(int signo) {
    printf("Señal SIGTERM (%d) recibida. Terminaré el programa.\n", signo);
}

int main() {
    // Asignar el manejador personalizado a SIGTERM
    signal(SIGTERM, manejador);

    while (1) {
        printf("Ejecutando... Presiona Ctrl+C para terminar el programa.\n");
        sleep(2);
    }
    return 0;
}
