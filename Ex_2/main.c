#include <stdio.h>

int main() {
    int somma = 0, n , attuale;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &attuale);
        somma += attuale;
    }
printf("%d\n", somma);
return 0;




}