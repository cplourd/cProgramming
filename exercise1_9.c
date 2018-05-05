#include <stdio.h>

/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank */

main(){
	int c, lastc;

	while((c = getchar()) != EOF)
		if (c != ' '){	// handles nonblank characters and prints them
			putchar(c);
			lastc = c;
		}
		else if (c == ' ' && lastc == ' '){   /* handles more than one consecutive blank */
			lastc = c;
		}	
		else if (c == ' ' && lastc != ' '){   /* handles single blank and prints */
			putchar(c);
			lastc = c;
		}
}
