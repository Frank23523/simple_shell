#include "main.h"
/**
* free_array - frees memory for arrays
* @array: string to be freed
*/
void free_array(char **array)
{
int i = 0;
if (array == NULL)
{
return;
}
while (array[i])
{
free(array[i]);
i++;
}
free(array);
}
