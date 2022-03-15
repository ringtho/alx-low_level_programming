#include "main.h"

/** 
 * times_table - print the 9 times table
 *
 */
void times_table(void){

	int num = 9;
	int i,j = 0;
	int result;

	while (i < 10)
	{
		while (j < 10)
		{
			result = j * num;
			_putchar(result);
			_putchar(',');
		}
		result = i * num;
		_putchar(result);
	}
}
