#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

    srand((unsigned)time(NULL));

    int aleatoria = rand();

    printf("%d", aleatoria);

}