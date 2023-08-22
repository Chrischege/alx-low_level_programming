#include "main.h"
/**
*print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/
void print_array(int *a, int n)
{
int in;
for (in = 0; in < n ; in++)
{
if (in != n - 1)
printf("%d, ", a[in]);
else
printf("%d", a[in]);

}
printf("\n");
}
