#include <stdio.h>

void imprimirArray(int *arr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: %d\n", i, arr[i]);
    }
}

int main() {
    int x = 20;   //variável comum (inteira)
    int *p = &x;  //ponteiro -> recebe o endereço de X

    printf("\n\nX = %d \n", x); //imprime o valor de x
    printf("&x = %p \n", (void*)&x); // endereço do x
    printf("p = %p \n", (void*)p); // endereço do p (que é igual ao X)
    printf("*p = %d \n", *p);  // valor o qual ele aponta (igual ao X)

    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    printf("\nSIZEOF VETOR: %d", sizeof(numeros));
    printf("\nSIZEOF VETOR[0]: %d", sizeof(numeros[0]));
    imprimirArray(numeros, tamanho);
    return 0;
}

