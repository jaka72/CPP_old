#include <stdio.h>
#include <string.h>
#include "../srcs/libft.h"

/*			  
#include <string.h>

void *memchr(const void *s, int c, size_t n);

DESCRIPTION
The memchr() function locates the first occurrence of c (converted to 
an unsigned char) in string s.

RETURN VALUES
The memchr() function returns a pointer to the byte located, 
or NULL if no such byte exists within n bytes.
*/

/// CLONE LOOMANS /////////////////////////////////////////////
void	*clone_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*uc_s;
	unsigned char		uc_c;

	i = 0;
	uc_s = s;
	uc_c = c;
	while (i < n)
	{
		if (uc_s[i] == uc_c)
			return ((void *)(uc_s + i));
		i++;
	}
	return (NULL);
}
///////////////////////////////////////////////////////////////

void	*ft_memchr2(const void *str, int ch, size_t n)
{
	const unsigned char *s;
	unsigned char 		c;
	size_t				i;

	s = str;
	c = ch;
	i = 0;
	while (i < n)  	//  IN THIS CASE BETTER USE i THAN *str
	{				//	BECAUSE IT NEEDS TO COMPARE ALSO THE \0
		if (s[i] == c)
			return ((char*)(s + i));
		i++;
	}
	return (NULL);
}



int main(void)
//int ft_memchr_main(void) 
{
	printf("\n------------------------------------------------------------");
	printf("\n--- FT_MEMCHR ---------------------------------------------\n\n");

	int n = 7;
	char c = 'i';
	char dest1[50] = "destination";
	printf("TEST 01: %s, '%c', %d\n", dest1, c, n);
  	printf("  orig: %s\n",         (char*)memchr(dest1, c, n));
    //printf(" clone: %s\n",   (char*)clone_memchr(dest1, c, n));
	printf("  mine: %s\n\n",   (char*)ft_memchr2(dest1, c, n));

	n = 3;
	c = 'i';
	char dest2[50] = "destination";
	printf("TEST 02: %s, '%c', %d\n", dest1, c, n);
  	printf("  orig: %s\n",         (char*)memchr(dest2, c, n));
    //printf(" clone: %s\n",   (char*)clone_memchr(dest2, c, n));
	printf("  mine: %s\n\n",   (char*)ft_memchr2(dest2, c, n));

	n = 10;
	c = 'n';
	char dest3[50] = "destination";
	printf("TEST 03: %s, '%c', %d\n", dest3, c, n);
  	printf("  orig: %s\n",         (char*)memchr(dest3, c, n));
    //printf(" clone: %s\n",   (char*)clone_memchr(dest3, c, n));
	printf("  mine: %s\n\n",   (char*)ft_memchr2(dest3, c, n));
	  
	return (0);
}
