#include <stdio.h>

/**
 * _atoi - check the code
 *
 * Description: 'the program's description'
 *
 * @s: we
 * Return: desr
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (s[i] == '-' || s[i] == '+')
		{
			if (sign == 0)
			{
				sign = (s[i] == '-') ? -1 : 1;
			}
			else
			{
				break;
			}
		}
		else
		{
			break;
		}
		i++;
	}

	return (result * sign);
}
