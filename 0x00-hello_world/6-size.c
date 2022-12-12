#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char type: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int type: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int type: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int type : %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a floa type: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
