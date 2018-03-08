#include <stdio.h>

/*converts celcius to fahrenheit */

int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celcius = lower;
	while(celcius <= upper){
		fahr = (celcius * (9.0/5.0)) + 32;
		printf("%6.1f %6.1f\n", celcius, fahr);
		celcius = celcius + step;
	}
}
