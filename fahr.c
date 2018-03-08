#include <stdio.h>

/* converting fahrenheit to celcius for certain C intervals */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* min value */
	upper = 300; /* max value */
	step = 20; /* interval */
printf("Fahrenheit Celsius\n");

	fahr = lower;
	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%6.0f %10.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

}