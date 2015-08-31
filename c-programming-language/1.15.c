#include <stdio.h>

float fahr_celsius(float fahr);

main()
{
	float fahr;
	float lower, upper, step;

	lower=0.;
	upper=300.;
	step=20.;
	for(fahr=lower; fahr<upper; fahr=fahr+step)
		printf("%3.0f%6.1f\n", fahr, fahr_celsius(fahr));
	return 0;
}

float fahr_celsius(float fahr)
{
	return (5./9.)*(fahr-32.);
}
