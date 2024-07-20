#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void center_text(int width, char *text)
{
	//count how many characters there are in string
	//subtract from width, divide by 2 to get left padding
	//insert left padding at the beginning of the string

	int len=0;
	int padding=0;
	
	len=strlen(text);

	padding = (width - len)/2;

	if (padding < 0)
		padding = 0;

	for (int i=0; i<padding; i++){
		putchar(' ');
		
	}
	printf("%s\n", text);
}

int main()
{
	/* some sample text to center */
	char *title[] = {
	   "March Sales",
	   "My First Project",
	   "Centering output is so much fun!",
	   "This title is very long, just to see whether the code can handle such a long title"
	};
	int x;

	/* output each of the strings, centered */
	for( x=0; x<4; x++ )
	{
		/* assume the screen width to be 80 characters */
		center_text( 80, title[x] );
	}

	return(0);
}
