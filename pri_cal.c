#include <stdio.h>

int main(void)
{
	printf("signed char max= %d\n",(char)((unsigned char) ~0 >> 1));
	return 0;
}
