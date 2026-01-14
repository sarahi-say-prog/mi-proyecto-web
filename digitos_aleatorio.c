#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num;

    srand(time(NULL));
    num = rand() % 90 + 10;   // Número aleatorio entre 10 y 99

    printf("Numero aleatorio de dos digitos: %d\n", num);

    return 0;
}

