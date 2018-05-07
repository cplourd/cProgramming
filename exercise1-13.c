#include <stdio.h>
/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizonatal; a vertical orientation is more challenging.*/

#define IN 1
#define OUT 0
#define MAXNWORDS 15
#define MAXLWORDS 15
main(){

	int c, a, b, state; /* a and b are indexes that will be used for iteration */
	int lword[MAXNWORDS]; /* array holding length of words(n=15)*/	
	for (a = 0; a < MAXNWORDS; a++){ // intialize all elements to 0
		lword[a] = 0;
	}

	state = OUT;
	a = -1;
	b = 0;
	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if (state == OUT){
			state = IN;
			a += 1;
			lword[a] += 1; 
		}
		else if (state == IN){
			lword[a] += 1;
		}
	}
	for (b = 0; b < MAXNWORDS; b++){
		printf(" %d", lword[b]);
	}
	printf("\n");
	for (b = 0; b < MAXNWORDS; b++){
		for( a = 1; a <= lword[b]; a++){
			printf("X");	
		}
		printf("\n");
	}
	for (b = 0; b <= MAXLWORDS; ++b){
		for (a = 0; a <= MAXNWORDS; ++a){
			if (lword[a] > b){
				printf("X");
			}
			else{
				printf(" ");
			}
		}	
	printf("\n");
	}
}
