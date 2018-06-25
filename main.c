#include <stdio.h>

//int	ft_isdigit(int i);
//int	ft_isalpha(int i);
//int	ft_isalnum(int i);
//int	ft_isascii(int c);
int	ft_isprint(int c);
int	main()
{
	for(int i = 0; i <= 130; i++)
		printf("%c: \t%d\n", i, ft_isprint(i));
}
