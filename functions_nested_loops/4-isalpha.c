#include "main.h"
/**
 * _isalpha - Entry point
 * Return: 1 (lower or uppercase) 0 (otherwise)
 * @c: is a placeholder
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
