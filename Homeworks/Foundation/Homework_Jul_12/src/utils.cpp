#include "utils.hpp"


int my_strcmp(const char* str1, const char* str2)
{
	// When one of them is empty?
	while (*str1 && *str2)
	{
		if (*str1 < *str2)
			return -1;
		else if (*str1 > *str2)
			return 1;
		str1++;
		str2++;
	}
	return 0;
}

char my_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 'a' - 'A';
		return c; 
	}
	return 0;	
}


int my_isalnum(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	return 0;
}


int my_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return 1;
	return 0;
}




