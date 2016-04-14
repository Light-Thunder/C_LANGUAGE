#include <stdio.h>

int main(void)
{
	int ch[10]={'A','a','B','C'};
	int i=0;
	for (i=0;i<10;i++)
	{
		printf("%d ",ch[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		putchar(ch[i]);
	}
	printf("\n");
}
