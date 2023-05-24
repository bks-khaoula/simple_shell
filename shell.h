#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* env variables */
extern char **environ;

/* string handlers */
int _strlen(char *s);

/* handle */
char *add_end_path(char *path, char *cmd);
void print_env(void);
void exit_cmd(char **command, char *line);
char *test_path(char **path, char *command);
#endif /* SHELL_H */
