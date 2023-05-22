#include "shell.h"

/**
* exit_cmd - handles the exit command
* @command: tokenized command
* @line: input read from stdin
*
* Return: no return
*/
void exit_cmd(char **cmd, char *ln)
{
	free(ln);
	free_buffers(cmd);
	exit(0);
}
