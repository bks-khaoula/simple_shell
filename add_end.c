#include "shell.h"

/**
* add_end_path - adds path to cmd
* @path: path of a written cmd
* @cmd:  an entered cmd
*
* Return: buffer containing command with path on success, or NULL on failure
*/

char *add_end_path(char *path, char *cmd)
{
	char *buffer;
	size_t i = 0, j = 0;

	if (cmd == 0)
		cmd = "";

	if (path == 0)
		path = "";

	buffer = malloc(sizeof(char) * (_strlen(path) + _strlen(cmd) + 2));
	if (!buffer)
		return (NULL);

	while (path[i])
	{
		buffer[i] = path[i];
		i++;
	}

	if (path[i - 1] != '/')
	{
		buffer[i] = '/';
		i++;
	}
	while (cmd[j])
	{
		buffer[i + j] = cmd[j];
		j++;
	}
	buffer[i + j] = '\0';
	return (buffer);
}
