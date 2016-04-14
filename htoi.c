#include <stdio.h>
#define YES 1
#define NO  0
#define MAX 81

int main(void)
{
	char str[MAX];
	int i=0;
	int result=0;
	fgets(str,MAX-1,stdin);
	while(str[i]!='\0')
		i++;
	i=i-1;
	str[i]='\0';
	result=htoi(str);
	printf("%ld\n",result);
}
int htoi(const char *s)
{
	int num=0;
	int i=0;
	int hexdigit=0;
	int inhex=YES;
	for(i=0;inhex==YES;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
			hexdigit=s[i]-'0';
		else if(s[i]>='a'&& s[i]<='f')
			hexdigit=s[i]-'a';
		else if(s[i]>='A'&&s[i]<='F')
			hexdigit=s[i]-'A';
		else 
			inhex=NO;
		num=num*16+hexdigit;
	}
	return num;

}

