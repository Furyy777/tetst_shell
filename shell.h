#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <aio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

#define  DELIM " \t\n\r\a;&&"
extern char **environ;

char *read_line(void);
char **tokenizer(char *line);

int _executecmd(char **command, char **argv);
char *_strdup(const char *strns);

int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

void freearray2D(char **arr);


#endif


