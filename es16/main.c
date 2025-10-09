#include <stdio.h>
#include <ctype.h>

struct Casa{
	int metri_quadri;
	char classe_energetica;
	int costo;
};

int migliore_classe(struct Casa a, struct Casa b) {
	
	if (a.classe_energetica < b.classe_energetica) return 1;
	if (a.classe_energetica > b.classe_energetica) return 0;
	return a.metri_quadri >= b.metri_quadri;
}

int main() {
	struct Casa c[3];
	
	for (int i = 0; i < 3; i++) {
		printf("Inserisci i dati della casa %d:\n", i+1);
		printf("Metri quadri: ");
		scanf("%d", &c[i].metri_quadri);
		printf("Classe energetica (A-F): ");
		scanf(" %c", &c[i].classe_energetica);
		c[i].classe_energetica = toupper(c[i].classe_energetica);
		printf("Costo in euro: ");
		scanf("%d", &c[i].costo);
	}

	// Calcolo costo minimo al metro quadro
	int y = 0;
	float mincostomq = (float)c[0].costo  / c[0].metri_quadri;
	for (int i = 1; i < 3; i++) {
		float costo_mq = (float)c[i].costo / c[i].metri_quadri;
		if (costo_mq < mincostomq) {
			mincostomq = costo_mq;
			y = i;
		}
	}

	// Calcolo migliore classe energetica
	int x = 0;
	for (int i = 1; i < 3; i++) {
		if (migliore_classe(c[i], c[x])) {
			x = i;
		}
	}

	printf("\nCasa col minor costo al metro quadro: casa %d (%.2f euro/mq)\n", y+1, mincostomq);
	printf("Casa con la migliore classe energetica: casa %d (classe %c, %d mq)\n", x+1, c[x].classe_energetica, c[x].metri_quadri);
	return 0;
}