#include "main.h"
/**
 * _strlen_recurs - prints length of a string
 * @c: the string to be printed
 * Return: the length
 */
int _strlen_recurs(char *c)
{
	if (c[0] != '\0')
		return (1 + _strlen_recurs(c + 1));
	return (0);
}
/**
 * palin_check - checks to see if s is a palindrome
 * @s: string
 * @i: left index.
 * @j: right index.
 * Return: int
 */
int palin_check(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
			return (1);
		else
			return (palin_check(s, i + 1, j - 1));
	}
	else
		return (0);
}
/**
 * is_palindrome - Checks if 's' is palindrome
 * @s: The string being checked
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (palin_check(s, 0, _strlen_recurs(s) - 1));
}
