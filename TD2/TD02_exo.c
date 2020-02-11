#include "stdio.h"
//EX1------------Q1----------------
int maximum(int *t, int n){
	int maxi = *t;
	for (int i = 1;i<n;i++){
		if(maxi<t[i]){
			maxi=t[i];
		}
	}
	return maxi;
}
void main(){

	int tab[5]={-6,-9,-10,-85,-3};
	printf("le maximum du tableau est %i \n",maximum(tab, 5));
}
//--------------Q2----------------
void f(int a, int b, int *s, int *p) {
	*s = a + b;
	*p = a * b;
}

void main(){
	int x, y;
	f(12, 4, &x, &y);
	printf("x = %d, y = %d\n", x, y);
}
//-------------Q3/4/5----------------
void minmax(int *t, int n, int *maxi, int *mini) {
	int max = *t, min = *t;
	for(int i =0;i<n;i++){
		if(t[i]>max){
			max=t[i];
		}
		if(t[i]<min){
			min=t[i];
		}
	}
	*maxi = max;
	*mini = min;
}

void main(){
	int tab[5]={-6,-9,-10,-85,-3};
	int maxim, minim;
	minmax(tab,5,&maxim, &minim);
	printf("le maxi est = %i, le mini est %i \n",maxim,minim);
}


//EX2------------Q1/2-----------------
#include "stdlib.h"

int* copie(int *tab, int n, int *tab2) {
	
	for (int i = 0; i < n; i++) {
		tab2[i] = tab[i];
		}
}

void main(){
	int tab[5]={-6,-9,-10,-85,-3};
	int *lacrim;
	lacrim = malloc(sizeof(int) * 5);
	copie(tab,5,lacrim);
	for(int i=0;i<5;i++){
		printf("%d ;", lacrim[i]);
	}
	free(lacrim);
}
//---------------Q3-----------------
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
//---------------Q1-----------------
//---------------Q1-----------------
//---------------Q1-----------------
//---------------Q1-----------------
//---------------Q1-----------------
//---------------Q1-----------------
//---------------Q1-----------------
//---------------Q1-----------------


