#include <stdio.h>
#include  <string.h>
#define MAX  100

int main(void)
{
	int ch;
	int num;
	int size;
	int i=0;
	char str[MAX];
	while((ch=getchar())!='\n')
	{
		str[i]=ch;
		++i;
	}
	++i;
	str[i]='\0';
	num=strlen(str);
	size=sizeof(str)/sizeof(str[0]);
	printf("%s\n",str);
	printf("%d  %d\n",num,size);
	return 0;
}

