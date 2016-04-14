#include <stdio.h>

int main(void)
{
	int c;
	int lastc;
	lastc = 'c';
	while( (c = getchar()) !=EOF)
	{
		if( c != ' ' )
			putchar(c);
		else if( lastc != ' ')
			putchar(c);
		lastc=c;
	}
	return 0;
}
