#include "main.h"

/** 
 * times_table - print the 9 times table
 *
 */
void times_table(void)
{
	int num = 9;
	int i = 0;
	int j = 0;
	int result;

	while (i < 10)
	{
		while (j < 10)
		{
			result = j * num;
			return (result);
			_putchar(',');
			j++;
		}
		result = i * num;
		return (result);
		i++;
	}
}
