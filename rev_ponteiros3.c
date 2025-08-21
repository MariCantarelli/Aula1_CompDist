#include <stdio.h>
#include <stdlib.h>

void alocarMemoria(int **p) {
    *p = (int *)malloc(sizeof(int));
    if (*p != NULL) {
        **p = 100;  // atribui 100 ao espaço alocado
    }
}

int main() {
    int *ptr = NULL;
    alocarMemoria(&ptr);
    if (ptr != NULL) {
        printf("Valor alocado: %d\n", *ptr);
        free(ptr);
        printf("APÓS O FREE: VALOR ALOCADO: %d\n", *ptr);
    }
    return 0;
}
