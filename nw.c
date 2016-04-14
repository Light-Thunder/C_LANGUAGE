#include <stdio.h>
#define OUT 0
#define IN  1

int main(void)
{
	int c,nl,nw,nc;
	int state;
	nl=nw=nc=0;
	state=OUT;
	while( (c = getchar()) !=EOF )
		{
			++nc;
			if( c == '\n')
			 	++nl;
			if( c==' ' || c== '\t'|| c== '\n' )
				state = OUT;
			else if( state == OUT)
				{
					state = IN;
					++nw;
				}

		}
	printf(" nc:%d  nl:%d  nw:%d\n",nc,nl,nw);
	return 0;
}

