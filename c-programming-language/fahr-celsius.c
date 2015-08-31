#include <stdio.h>
/* print Fahrenheit-Ceilsius table for fahr = 0, 20, ...,300 */
main()
{
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0;
	upper = 300;
	step=20;

	fahr = lower;
	printf("%s","This is a converted table\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.f\t%6.1f\n", fahr, celsius);		/*print the results, a tab is used.*/
		fahr = fahr + step;
	}
}
