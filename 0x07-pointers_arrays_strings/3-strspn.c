#include "main.h"

/**
 *  _strspn - Entry point
 *  @s: input
 *  @accept: input
 *  Return: always 0 (Sucess)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				i++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (i);
		}
		s++
	}
	return (i);
}
