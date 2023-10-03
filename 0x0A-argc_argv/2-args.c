#include <stdio.h>
/**
 * main - prints all arguments it receives
 *@argc: argument count
 *@argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
