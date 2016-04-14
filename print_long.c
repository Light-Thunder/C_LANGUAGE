#include <stdio.h>

#define  MAXWORD  1000
#define LONGSIZE  80
int gets_in(char s[],int num);
void copy(char to[],char from[]);
int removes(char str[]);
void reverse(char str[]);
int main(void)
{
	char str[MAXWORD];
	char longest[MAXWORD];
	int len=0;
	int max=0;
	while((len=gets_in(str,MAXWORD))>0)
	{
		//printf("%d %s",len,str);
		//if(len>max)
		//{
		//	max=len;
		//	copy(longest,str);
		//}
		//if(len>LONGSIZE)
		//	printf("%d %s",len,str);
		//else
		//	printf("less than 80 words!\n");
		//if(removes(str)>0)
		reverse(str);
		printf("%s",str);
	}
	
	//if(max>0)
	//	printf("%s\n",longest);	
	return 0;
}

int gets_in(char s[],int num)
{
	int c=0;
	int i=0;
	int j=0;
	while((c = getchar()) !=EOF &&c != '\n')
		{
			++i;
			if(i<num-2)
			{
				s[j]=c;
				++j;
			}
		}	
	if(c=='\n')
	{
		s[j]=c;
		++j;
		++i;
	}
	s[j]='\0';
	return i;
}
void  copy(char to[],char from[])
{
	int i=0;
	while((to[i]=from[i])!='\0')
		i++;
}
int removes(char str[])
{
	int i=0;
	while(str[i]!='\n')
		++i;
	--i;
	while(i>=0&&str[i]==' '|| str[i]=='\t')	
		--i;
	if(i>=0)
	{
		++i;
		str[i]='\n';
		++i;
		str[i]='\0';
	}
	return i;
}
/* reverse in */
void reverse(char s[]) 
{
	int i,j;
//	i=j=0;
	i=j=0;
	char temp;
	while(s[i]!='\0')
		++i;
	--i;
	if(s[i]=='\n')
		--i;
	while(j<i)
	{
		temp=s[j];
		s[j]=s[i];
		s[i]=temp;
		--i;
		++j;
	}
}
