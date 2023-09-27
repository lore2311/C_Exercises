#include <stdio.h>

typedef struct {
    float glicemia;
    float peso;

    } ValDiabete ;

typedef struct {
    int pressione;
    int fc;

    } ValCardio ;

typedef union {
    ValDiabete vd;
    ValCardio vc;

    } Valori ;

typedef struct {
    int id;
    int diagnosi;
    Valori val;

    } Paziente ;


int main() {
    int n;
    scanf("%d", &n);
    Paziente pazienti[n];
    for (int i = 0; i < n ; i++) {
        scanf("%d" "%d", &pazienti[i].id, &pazienti[i].diagnosi);
if (pazienti[i].diagnosi == 1  ) {
            scanf("%f" "%f", &pazienti[i].val.vd.glicemia, &pazienti[i].val.vd.peso);
        } else {
            scanf("%d" "%d", &pazienti[i].val.vc.pressione, &pazienti[i].val.vc.fc);
        }
    }
   for (int i = 0 ; i < n ; i ++ ) {
       if (pazienti[i].diagnosi == pazienti[n-1].diagnosi) {
              if (pazienti[i].diagnosi == 1) {
                printf("ID:%d, Glicemia:%d Peso:%d", pazienti[i].id, pazienti[i].val.vd.glicemia, pazienti[i].val.vd.peso);
              } else {
                printf("ID:%d, FC:%d Pressione:%d", pazienti[i].id, pazienti[i].val.vc.fc, pazienti[i].val.vc.pressione);
              }
       }
   }

}
