#include "utils.h"

void	Input (int& num)
{
	while(true)
	{
		std::cout << "Enter a number: ";
		std::cin >> num;
		if(!std::cin)
		{
			std::cout << "It's not a number, try again" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000,'\n');
		}
		else
			break;
		std::cin.clear();
	}
}


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








