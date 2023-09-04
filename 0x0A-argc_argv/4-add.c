#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int sum, i, j;

	 sum = 0;
	if (argc != 1)
	{


		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < (int)strlen(argv[i]); j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Erro\n");
					return (1);
				}

			}
			sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
		return (0);
}
