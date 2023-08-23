#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include "monty.h"

void file_error(char *argv);
void error_usage(void);
int status = 0;
void opcode(stack_t **custom_stack, char *str, unsigned int line_count);

/**
 * main - entry point
 * @argv: program arguments listed
 * @argc: number of args
 *
 * Return: nothing
 */

int main(int argc, char **argv)

{
	FILE *file;
	size_t buf_len = 0;
	char *buffer = NULL;
	char *str = NULL;
	stack_t *custom_stack = NULL;
	unsigned int line_count = 1;

	global.data_struct = 1;
	if (argc != 2)
		error_usage();
	file = fopen(argv[1], "r");

	if (!file)
		file_error(argv[1]);

	while ((getline(&buffer, &buf_len, file)) != (-1))
	{
		if (status)
			break;
		if (*buffer == '\n')
		{
			line_count++;
			continue;
		}
		str = strtok(buffer, "\t\n");
		if (!str || *str == '#')
		{
			line_count++;
			continue;
		}
		global.argument = strtok(NULL, "\t\n");
		opcode(&custom_stack, str, line_count);
		line_cont++;
	}
	free(buffer);
	free_stack(custom_stack);
	fclose(file);
	exit(EXIT_SUCCESS);
}

/**
 * file_error - error message file exit
 * @argv: program passed arguments
 * 
 * Desc: impossible fle open message print
 * Return: nothing
 */

void file_error(char *argv)

{
	fprintf(stderr, "Error: can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

/**
 * error_usage - usage message printed
 *
 * Desc: no file given
 * Return: nothing
 */

void error_usage(void)

{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
