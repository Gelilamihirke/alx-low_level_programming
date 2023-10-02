#include <stdio.h>
#include <stdlib.h>
/**
 * main - min number
 * @argc: arrgument add to the program
 * @argv: pointers to the argument
 * Return: not onr 1 otherwise 0
 */
int main(int argc, char *argv[])
{
	int cent, coin = 0;

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	while (cent > 0)
	{
		coin++;
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}
		if ((cent - 10) >= 0)
		{
			cent -= 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", coin);
	return (0);
}
