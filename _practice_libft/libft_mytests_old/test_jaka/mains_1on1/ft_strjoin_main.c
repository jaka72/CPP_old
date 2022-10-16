#include <stdio.h>
#include <string.h>
//#include <bsd/string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../srcs/libft.h"


// Prototype
//char *ft_strjoin(char const *s1, char const *s2);
/*

*/

char	*ft_strjoin4(char const *s1, char const *s2)
{
	char	*pt;
	int		len;

	if (!s1)
		return ((char*)s2);
	if (!s2)
		return ((char*)s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	pt = malloc((len + 1) * sizeof(char));
	if (!pt)
		return (NULL);
	while (*s1)
	{
		*pt = *s1;
		pt++;
		s1++;
	}
	while (*s2)
	{
		*pt = *s2;
		pt++;
		s2++;
	}
	*pt = '\0';
	return (pt - len);
}

char *ft_strjoin3(char const *s1, char const *s2)
{
	char *pt;
	int len;

	if (!s1)
		return ((char*)s2);
	if (!s2)
		return ((char*)s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	pt = malloc((len + 1) * sizeof(char));
	if (!pt)
		return (NULL);
	while (*s1)
		*pt++ = *s1++;
	while (*s2)
		*pt++ = *s2++;
	*pt = '\0';
	return (pt - len);
}

char	*ft_strjoin2(char const *s1, char const *s2)
{
	char	*pt;
	int		len;

	if (!s1)
		return ((char*)s2);
	if (!s2)
		return ((char*)s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	pt = malloc((len + 1) * sizeof(char));
	if (!pt)
		return (NULL);
	ft_strcpy(pt, (char*)s1);
	pt = pt + ft_strlen(s1);
	ft_strcpy(pt, (char*)s2);
	//*pt = '\0';
	return (pt - ft_strlen(s1));
}


int main(void)
//int ft_strjoin_main(void) 
{
	printf("\n------------------------------------------------------------");
	printf("\n--- FT_STRJOIN ---------------------------------------------\n\n");


	char *str1a = "abcd";
	char *str1b = "EFGH";
	printf("TEST 01   str1: \"%s\"   str2: \"%s\"\n", str1a, str1b);
   	printf("  orig: %s\n", 	  ft_strjoin2(str1a, str1b));   
	printf("  mine: %s\n\n",   ft_strjoin(str1a, str1b));      
    
	char *str2a = "";
	char *str2b = "EFGH";
	printf("TEST 02   str1: \"%s\"   str2: \"%s\"\n", str2a, str2b);
   	printf("  orig: %s\n", 	  ft_strjoin2(str2a, str2b));   
	printf("  mine: %s\n\n",   ft_strjoin(str2a, str2b));

	char *str3a = "abcd";
	char *str3b = "";
	printf("TEST 03   str1: \"%s\"   str2: \"%s\"\n", str3a, str3b);
   	printf("  orig: %s\n", 	  ft_strjoin2(str3a, str3b));   
	printf("  mine: %s\n\n",   ft_strjoin(str3a, str3b));

	char *str4a = "abcd";
	char *str4b = NULL;
	printf("TEST 04   str1: \"%s\"   str2: \"%s\"\n", str4a, str4b);
   	printf("  orig: %s\n", 	  ft_strjoin2(str4a, str4b));   
	printf("  mine: %s\n\n",   ft_strjoin(str4a, str4b));

	char *str5a = NULL;
	char *str5b = "EFGH";
	printf("TEST 05   str1: \"%s\"   str2: \"%s\"\n", str5a, str5b);
   	printf("  orig: %s\n", 	  ft_strjoin2(str5a, str5b));   
	printf("  mine: %s\n\n",   ft_strjoin(str5a, str5b));
	
	return(0);
}

