#include <stdio.h>
#define OUT 0
#define IN 1

int main(int argc, char *argv[] ){
	int j, i;
	char c; // c: current character
	int state = OUT;
	int nc = 0, nw = 0; // nc: number of characters, nw: number of words
	while((c = getchar()) != EOF){
		if(c == '\t' || c == '\n' || c == ' '){
			if (state == IN){
				state = OUT;
				printf("%d: ", nc);
				for(j = 0; j < nc; j++)
					printf("*");
				printf("\n");
				nw++;
				nc = 0;
			}
		} else{
			state = IN;	
			nc++;
		}

	}
	if (state == IN){
		printf("%d: ", nc);
		for(j = 0; j <nc; j++)
			printf("*");
		printf("\n");
		nw++;
	}	
	// final print logic
	if(nw <= 0)
		printf("Missing words, unable to generate histogram");
	else printf("Histogram COMPLETE");
	return 0;
}