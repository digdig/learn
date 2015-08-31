#include <stdio.h>
#include <limits.h>
main()
{
	//char
	printf("The **bit** of %20s\tis:\t%d\n", "#char#", CHAR_BIT);
	printf("The **max** of %20s\tis:\t%d\n", "#char#", CHAR_MAX);
	printf("The **min** of %20s\tis:\t%d\n", "#char#", CHAR_MIN);
	printf("The **max** of %20s\tis:\t%d\n", "#signed char#", SCHAR_MAX);
	printf("The **min** of %20s\tis:\t%d\n", "#signed char#", SCHAR_MIN);
	printf("The **max** of %20s\tis:\t%d\n", "#unsigned char#", UCHAR_MAX);
	//short
	printf("The **max** of %20s\tis:\t%d\n", "#short#", SHRT_MAX);
	printf("The **min** of %20s\tis:\t%d\n", "#short#", SHRT_MIN);
	printf("The **max** of %20s\tis:\t%u\n", "#unsigned short#", USHRT_MAX);
	//int
	printf("The **max** of %20s\tis:\t%d\n", "#int#", INT_MAX);
	printf("The **min** of %20s\tis:\t%d\n", "#int#", INT_MIN);
	printf("The **max** of %20s\tis:\t%u\n", "#unsigned int#", UINT_MAX);
	//long
	printf("The **max** of %20s\tis:\t%ld\n", "#long#", LONG_MAX);
	printf("The **min** of %20s\tis:\t%ld\n", "#long#", LONG_MIN);
	printf("The **max** of %20s\tis:\t%lu\n", "#unsigned long#", ULONG_MAX);
}
