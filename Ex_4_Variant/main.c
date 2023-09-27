#include <stdio.h>

int fattoriale(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fattoriale(n - 1);
    }
}

int main () {
    int n;
    scanf("%d", &n);
    printf("Il fattoriale di %d e' %d\n", n, fattoriale(n));
    return 0;
}