#include <stdio.h>
int main() {
	int i=0;
	FILE *f;
	f = fopen("letexte","r");
	while (1) {
		i = fgetc(f);
		if(i==90 || i==122){
			i=i-26;
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


}	