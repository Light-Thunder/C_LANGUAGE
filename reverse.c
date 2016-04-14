#include <stdio.h>

int main(void)
{
	int value;
	int temp;
	int result;
	int bit_1,bit_2,bit_3;
	scanf("%d",&value);
	bit_1=value/100;
	temp=value%100;
	bit_2=temp/10;	
	bit_3=value%10;
	result=bit_3*100+bit_2*10+bit_1;
	printf("%d\n",result);
}
