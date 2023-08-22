#include "main.h"
/**
* _strcpy - Copy paste string
*@dest: destination
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int in = 0;
while (*(src + in) != '\0')
{
*(dest + in) = *(src + in);
in++;
}
*(dest + in) = '\0';
return (dest);
}
