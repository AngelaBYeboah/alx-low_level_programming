#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid passwords for the
 * program 101-crackme
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, n;

	srand(time(NULL));

		for (index = 0; index < 100; index++)
		{
			password[index] = rand() % 78;
			sum += (password[index] + '0');
			putchar(password[index] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
				break;
		}
	}
	return (0);
}
