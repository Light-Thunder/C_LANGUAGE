#include <stdio.h>

void Upper( char** p )
{
	int i=0;
	int temp = sizeof(*p)/sizeof(**p);
	for(i=0;i< temp ;i++)
	{	
			printf("%d\n",temp);
			if( *(*p+i)> 'A'&& *(*p+i) < 'Z')
				*(*p+i)=*(*p+i)-'A'+'a';		
	}
}
int main(void)
{
	char str[]="ABcdefGE";
	printf("0x%x\n",&str);
	int temp = sizeof(str)/sizeof(str[0]);
	printf("%d\n",temp);
	Upper(str);
	printf("%s\n",str);
	return 0;
}
