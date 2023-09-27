#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    int fattoriale = 1;

    if (numero > 0) {
        int i = 1;
        while (i <= numero) {
            fattoriale = fattoriale * i;
            i = i + 1;
        }

    }

    printf("%d\n", fattoriale);


    return 0;
}
