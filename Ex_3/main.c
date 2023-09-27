#include <stdio.h>

#include <stdlib.h>

int main() {
    int i, j, lenx , leny , num_el_comuni = 0;
    scanf("%d",&lenx);

    int primo_array[lenx];

    for (i = 0; i < lenx; i++) {
        scanf("%d", &primo_array[i]);
    }

    scanf("%d",&leny);

    int secondo_array[leny];

    for (j = 0; j < leny; j++) {
        scanf("%d", &secondo_array[j]);
    }

    for (i = 0; i < lenx; i++) {
        for (j = 0; j < leny; j++) {
            if (primo_array[i] == secondo_array[j]) {
                num_el_comuni++;
                break;
            }
        }
    }

    printf("%d", num_el_comuni);
    return 0;
}