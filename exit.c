#include "shell.h"

/**
* exit-c - cmd_exit
* @command: cmd
* @line: input
*
* Return: 0
*/
void exit_c(char **cmd, char *ln)
{
	free(ln);
	free_buffers(cmd);
	exit(0);
}
