#include "shell.h"

/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
	char *line;
	size_t size;

	do {
		line = NULL;
		size = 0;
		exam_line(line, size);

	} while (1);

	return (0);
}
