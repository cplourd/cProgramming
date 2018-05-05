#include <stdio.h>

//Write a program to count blanks, tabs, and newlines.
main(){
	int c, nb=0, nt=0, nl=0; //int will work for the example
	while((c = getchar()) != EOF)
		if(c == ' ')
			++nb;
		else if(c == '\t')
			++nt;
		else if(c == '\n')
			++nl;
	printf("Blanks:%d Tabs:%d NewLines:%d\n", nb, nt, nl);

}
