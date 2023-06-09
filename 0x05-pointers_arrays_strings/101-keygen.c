#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - check the code
 *
 * Description: 'the program's description'
 *
 * Return: 0P
 */
int main(void)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABwsdsadasd";
	const int charset_size = sizeof(charset) - 1;

	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % charset_size];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
