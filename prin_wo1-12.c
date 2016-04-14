#include <stdio.h>

int main(void)
{
	int c;
	int flag=0;
	while( (c = getchar()) != EOF )
	{
		if( c == '\n'|| c== '\t'|| c== ' ')
			{
					if(flag == 1 );
					{	
						putchar('\n');
						flag=0;
					}
			}
		else if(flag == 0)
			{
				flag=1;
				putchar(c);
			}
		else putchar(c);
	}
	return 0;
}
