#include <stdio.h>
#define MESSAGE "super\n"
int dbl(int n){
	return 2*n;
}
int main() {	

printf("rsultat: %i\n", dbl(4));

//---------EX 10----------
int i,tab[3],oct;	
printf("%lu, %lu\n", (long unsigned)&tab[0], (long unsigned)&tab[1]);
oct=(int)&tab[1]-(int)&tab[0];
printf("%i\n", oct);

float tab1[3];
printf("%lu, %lu\n", (long unsigned)&tab1[0], (long unsigned)&tab1[1]);
oct=(int)&tab1[1]-(int)&tab1[0];
printf("%i\n", oct);
printf("%i", tab1[0]);
/*tab[0]=1;

tab[1]=2;
for(i=0;i<4;i++){
	printf("%i\n",tab[i]);
}*/



	//---------EX 14-------------
#include <stdio.h>
int main() {
int t[2];
printf("Premiere adresse: %i, seconde adresse: %i\n", (int)t,
(int)(t+1));
}
'''Premiere adresse: -1002503968, seconde adresse: -1002503964'''

}
	//---------EX 15-------------


int i;
for(i=1;i<101;i++){
	printf("%i ",i);
		
}


	//---------EX 16-------------


int i;
for(i=1;i<101;i++){
	if(i%3!=0 && i%7!=0){
		printf("%i ",i);
	}	
}


	//---------EX 17-------------

int i=13195;

while(i%2262!=0 || i%13195!=0){
	i=i+5;		
}
printf("%i ",i);	


	//---------EX 18-------------
char chaine[80];
printf("Entrez une chaine: ");
fgets(chaine, 80, stdin);
fputs(chaine, stdout);
char indice;
int i=0;
while(chaine[i]!='\0'){
	i++;
}
i--;
printf("\n %i \n", i);
	//---------EX 19-------------

int palindrome(char *chaine){
	char indice;
	int i=0, p;
	while(chaine[i]!='\0'){
		i++;
	}
	i--;
	for(p=0;p<=i/2;p++){
		if(chaine[i-p-1]!=chaine[p]){
			return 0;
		}
	}
	return 1;
}

int main() {
	char chaine[80];
	printf("Entrez une chaine: ");
	fgets(chaine, 80, stdin);

	printf("\n %i \n",palindrome(chaine));

}
	//---------EX 20-------------

	//---------EX 21-------------
int i=0;
FILE *f;
f = fopen("letexte","r");
while (1) {
	i = fgetc(f);
	if(i==90 || i==122){
		i=i-25;
	}
	if(i!=32){
		i++;
	}
	if (feof(f)) {
		break;
	}
	fputc(i,stdout);
}
printf("\n");
fclose(f);
	//---------EX 15-------------
	//---------EX 15-------------

	//---------EX 15-------------
	//---------EX 15-------------
	//---------EX 15-------------
	//---------EX 15-------------


