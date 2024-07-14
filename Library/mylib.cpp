#include "mylib.h"


int my_strlen(const char *str)
{
	int	len = 0;
	while (*str++)
		len++;
	return len;
}


char* my_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return (char *)str;
		str++;
	}
	return NULL;
}
//////////////
char* my_strcat(char *dest, const char *src)
{
	char *res_ptr = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return res_ptr;
}

char* my_strcpy(char *dest, const char *src)
{
	char	*ptr  = dest;
	while(*src)
		*dest++ = *src++;
	*dest = '\0';
	return ptr;
}

char* my_strstr(const char *haystack, const char *needle)
{
	//How can we return char * without using cast, if the input only const char *
	const char *ptr_h;
	const char *ptr_n;
	while (*haystack)
	{
		ptr_h = haystack;
		ptr_n = needle;
		while (*haystack == *ptr_n && *ptr_n && *haystack)
		{
			haystack++;
			ptr_n++;
		}
		if (*ptr_n == '\0')
			return (char *)ptr_h;
		haystack++;
	}
	return NULL;
}



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
