#include "main.h"
int is_palindrome_recursive(char *s, int start, int end);
int lenght(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
	len++;
	return (lenght(s + 1) + len);
	}
	return (len);
}
int is_palindrome(char *s)
{
	int l = lenght(s);
		return (is_palindrome_recursive(s, 0, l - 1));
}
int is_palindrome_recursive(char *s, int end, int start) 
{
	if (start >= end)
	{
		return 1;
	}
	if (s[start] != s[end])
	{
	return 0;
	}
	return is_palindrome_recursive(s, start + 1, end - 1);
}

