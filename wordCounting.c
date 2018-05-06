#include <stdio.h>
/* bare-bones version of the UNIX program wc (word count) */
#define IN 1 //inside a word
#define OUT 0 // outside a word

//count line, words, and characters in input
main(){
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n'){
			++nl;
		}
		else if (c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("Lines:%d Words:%d Characters:%d\n", nl, nw, nc);
}
