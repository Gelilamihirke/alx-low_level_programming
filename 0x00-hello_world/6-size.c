#include <stdio.h>
/**
 * main - This is the main function of the code
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Siae of a char: %lu byte(s)\n", sizeof(a));
	printf("Siae of an int: %lu byte(s)\n", sizeof(b));
	printf("Siae of a long int: %lu byte(s)\n", sizeof(c));
	printf("Siae of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Siae of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
