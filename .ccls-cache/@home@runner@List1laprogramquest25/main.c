#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;

    // Recebe o tempo em segundos
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    // Calcula as horas
    horas = segundos / 3600;
    segundos_restantes = segundos % 3600;

    // Calcula os minutos
    minutos = segundos_restantes / 60;

    // Calcula os segundos restantes
    segundos_restantes %= 60;

    // Imprime o resultado
    printf("Tempo: %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos_restantes);

    return 0;
}
