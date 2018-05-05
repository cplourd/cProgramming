/* read a character
   while (character is not end-of-file indicator)
  	 output the character just read
  	 read a character
*/
#include <stdio.h>
main(){
/*	int c;

	c = getchar();
	while (c != EOF){
		putchar(c);
		c = getchar();
	}
*/
	int c;
	while ((c = getchar()) != EOF){
		putchar(c);
	}
}
