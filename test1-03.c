#include <stdio.h>
#define C_MAX  100
#define STEP   10
#define C_MIN  0

int main(void)
{
	float  far,cel;
	cel = C_MIN;
	printf("Celsius   Fahrenheit\n");
	while(cel <= C_MAX)	
		{
			far = cel*9.0/5.0+32.0;
			printf("%3.0f       %6.2f\n",cel,far);
			cel += STEP;	
		}
	return 0;
}
