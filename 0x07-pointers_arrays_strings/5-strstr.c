#include "holberton.h"
/**
 * *_strstr - locates a substring
 *
 * @haystack: pointer
 *
 * @needle: pointer
 *
 * Return: string or 0
 */
char *_strstr(char *haystack, char *needle)
{
	int c, d;

	for (c = 0; *(haystack + c); ++c)
	{
		for (d = 0; *(needle + d); ++d)
		{
			if (*(haystack + c + d) != *(needle + d))
			{
				break;
			}
		}
		if (*(needle + d) == '\0')
		{
			return (haystack + c);
		}
	}
	return (0);
}
