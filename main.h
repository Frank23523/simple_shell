#ifndef MAIN_H
#define MAIN_H

#include <errno.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define READ_SIZE 1024

extern char **environ;

char *read_input(void);
char **break_it_down(char *input);
int execute_command(char **command, char **argv, int index);
char *my_getenv(char *var);
char *_getpath(char *input);

void free_array(char **array);
char *int_to_str(int n);
void reverse_string(char *str, int length);
void printerror(char *name, char *command, int index);

char *_strdup(const char *s);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strpbrk(char *s, const char *accept);
char *_strchr(const char *s, char c);
char *my_strtok(char *str, const char *delim);

int builtin_check(char *input);
void handle_builtin(char **command, char **argv, int *status, int index);
void print_env(char **command, int *status);
void exit_shell(char **command, char **argv, int *status, int index);

int is_positive_number(char *string);
int _atoi(char *str);

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream);

#endif /* MAIN_H */
