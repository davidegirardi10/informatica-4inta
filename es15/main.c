#include <stdio.h>

typedef struct {
    int posti;
    float altezza;
    float lunghezza;
    float larghezza;
} Tavolo;

int main() {
    Tavolo tavoli[4] = {
        {4, 0.75, 1.2, 0.8},
        {6, 0.75, 1.8, 0.9},
        {2, 0.75, 0.8, 0.8},
        {8, 0.75, 2.0, 1.0}
    };

    int totale_posti = 0;
    float superficie_media_totale = 0.0;

    printf("Dati dei tavoli:\n");
    for (int i = 0; i < 4; i++) {
        float superficie = tavoli[i].lunghezza * tavoli[i].larghezza;
        float superficie_media = superficie / tavoli[i].posti;
        printf("Tavolo %d: posti=%d, superficie=%.2f m^2, superficie media a persona=%.2f m^2\n",
               i + 1, tavoli[i].posti, superficie, superficie_media);
        totale_posti += tavoli[i].posti;
        superficie_media_totale += superficie;
    }

    printf("\nNumero totale di posti: %d\n", totale_posti);
    printf("Superficie media a persona totale: %.2f m^2\n", superficie_media_totale / totale_posti);

}