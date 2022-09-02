#include <stdio.h>

/**
 * main - Entry program
 * @ac: num of args
 * @av: args
 * Return: 0 on success
 */
int main(int ac, char **av)
{

	while (*av)
	{
		printf("%s\n", *av);
		av++;
	}
	return (0);
}
