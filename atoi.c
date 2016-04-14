#include <stdio.h>
#define MAX  100

char s_t[MAX];
int atoi(const char *s);
char* delUpper(const char *s);
int main(void)
{
	char s[MAX];
	long result;
	char* str;
	fgets(s,MAX-1,stdin);
//	result=atoi(s);
	str=delUpper(s);
	printf("%s\n",str);
//	printf("%ld\n",result);
	return 0;
}
int atot(const char *s)
{
	int i;
	long num=0;
	long sub=1;
	i=0;
		
	while(s[i]==' ')
		i++;
	if(s[i]=='-')
	{
		i++;
		sub=-1;
	}
	while(s[i]!='\0')
	{
		if(s[i]>'0'&&s[i]<'9')
		{
			num=10*num+s[i]-'0';
		}
		i++;
	}
	
	return sub*num;
}
char* delUpper(const char *s)
{
	int i=0;
	int j=0;
	//char str[MAX];
	while(s[i]!='\0')
	{
		if(s[i]>='a' && s[i]<='z')
			s_t[j++]=s[i];
		
		i++;	
	}
	s_t[i]='\0';
	return s_t;
	
}
