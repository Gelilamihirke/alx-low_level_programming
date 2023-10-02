#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *x;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			x = argv[i];

			for (j = 0; j < strlen(x); j++)
			{
				if (x[j] < 48 || x[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(x);
			x++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
