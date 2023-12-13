#include "main.h"
/**
* reverse_string - reverses a string
* @str: string to be reversed
* @length: lenght of string
*/
void reverse_string(char *str, int length)
{
char tmp;
int start = 0;
int end = length - 1;
while (start < end)
{
tmp = str[start];
str[start] = str[end];
str[end] = tmp;
start++;
end--;
}
}
