#include "shell.h"

/**
* exit_cmd - exit func
* @command: cmd
* @line: inputs
*
* Return: 0
*/
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}
