#include "stdio.h"
#include "stdlib.h"

int* copie_unsurdeux(int *tab, int n, int *tab2) {
	
	for (int i = 0; i < n; i+=2) {
		tab2[i] = tab[i];
		}
}

void main(){
	int tab[5]={-6,-9,-10,-85,-3};
	int *lacrim;
	lacrim = malloc(sizeof(int) * 5);
	copie_unsurdeux(tab,5,lacrim);
	for(int i=0;i<5;i++){
		printf("%d ;", lacrim[i]);
	}
	free(lacrim);
}