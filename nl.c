#include <stdio.h>
int main(void)
{
	int c;
	int ns=0,nt=0,nl=0;
	while( (c = getchar()) != EOF)
		{
			if( c == '\n')
				++nl;
			if( c == '\t')
				++nt;
			if( c == ' ')
				++ns;
		}
	printf("%d\n",nl);
	printf("%d\n",nt);
	printf("%d\n",ns);
	return 0;
}	

