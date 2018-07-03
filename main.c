#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <string.h>
#include "libftasm.h"

int	main(void)
=======
#include <strings.h>
/*//int	ft_isdigit(int i);
//int	ft_isalpha(int i);
//int	ft_isalnum(int i);
int	ft_isascii(int c);
//int	ft_isprint(int c);
//int	ft_toupper(int c);
//int	ft_tolower(int c);
//void	ft_bzero(void *s, size_t n);
//int	len(char *s);
//char	*ft_strcat(char *dest, const char *src);
int	ft_puts(const char *s);
void	ft_putstr(const char *s);
void	ft_putchar(char c);
void	*ft_memcpy(void *dest, void *src, size_t n);
int	ft_strlen(char *s);
int	ft_strcmp(char *s1, char *s2);
void	ft_memset(void *s, int c, size_t len);*/
//int	ft_cat(int fd);
//char *ft_strncat(char *dst, char *src, size_t len); 
//void	ft_putchar(char c);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, size_t len);
//char	*ft_strdup(char *s);
//int		ft_strlen(char *s);
//void	*ft_memcpy(void *s, void *s1, size_t n);
int	main()
>>>>>>> 1b932b41be590f7cca0e26fbdeaf0155920d87f1
{
	int i;
	char	*s = ft_strdup("hello");
	ft_bzero(s, 3);
	printf("%c\n", s[4]);
	char *tt = malloc(sizeof(char) * 1000);
	strcpy(tt, "test");
	printf("str: %s\n", ft_strcat(tt, "fuck"));
	//test ft_isalpha
	for (i = 50; i < 130; i++)
		printf("char: %c : %d\n", i, ft_isalpha(i));
	int len = ft_puts("testing puts");
	printf("printed: %d\n", len);
	for (i = 38; i < 62; i++)
		printf("digit: %c : %d\n", i, ft_isdigit(i));
	for (i = 40; i < 126; i++)
		printf("isalnum: %c : %d\n", i, ft_isalnum(i));
	char *upper = strdup("tes&Rgg09");
	printf("str: %s\nupper: ", upper);
	i = -1;
	while (upper[++i])
		printf("%c", ft_toupper(upper[i]));
	printf("\n");

	char *lower = ft_strdup("TES&Rgg09");
	printf("str: %s\nlower: ", lower);
	i = -1;
	while (lower[++i])
		printf("%c", ft_tolower(lower[i]));
	printf("\n");
	for (i = -3; i < 130; i++)
		printf("ascii: %c : %d\n", i, ft_isascii(i));
	printf("Length of '%s' = %d\n", "Tshilidzi", (int)ft_strlen("Tshilidzi"));
	char *test = ft_strdup("Tshilidzi");
	printf("before memset of 3 chars: %s ", test);
	char *s2 = ft_memset(test,'a', 3);
	printf("after: %s\n", s2);

	s = (char *)malloc(5000);
	printf("memcpy: %s\n", ft_memcpy(s, "this guy fucks", 6));

	s = ft_strdup("11111");
	printf("len: %s\n", s);
	for (i = 30; i < 130; i++)
		printf("isprint: %c : %d\n", i, ft_isprint(i));
	if (!ft_strcmp("tshili", "tsholi"))
		printf("Strings are equal\n");
	else
		printf("Strings are not equal\n");
	printf("isblank: %c : %d\n", '\t', ft_isblank('\t'));
	printf("isblank: %c : %d\n", ' ', ft_isblank(' '));
	printf("isblank: %c : %d\n", 'a', ft_isblank('a'));
	printf("isblank: %c : %d\n", 'b', ft_isblank('b'));

<<<<<<< HEAD
	s = malloc(500);
	s = strcpy(s, "Tshilidzi");
	printf("before strncat: %s ", s);
	printf("After: %s\n", ft_strncat(s, "Tshivhula", 5));
	return (0);
=======
/*	char *ptr = malloc(500);
	ptr = strcpy(ptr, "test");
	printf("%s\n", ptr);
	ptr = ft_strncat(ptr, " hitfgfdffgfg", 5);
	printf("%s\n", ptr);
	return 0;*/
	printf("%d\n", ft_strcmp("hello", "heLlo"));
	printf("%d\n", ft_strncmp("hello", "hello", 2));
	//char *str;
	//str = ft_strdup("Hello world");
	//printf("%s\n", str);
	/*
	char hel[] = "hello world";
	char hell[] = "Hello me";
	ft_memset(hel, 'R', 5);
	ft_memcpy(hell, "The best", 2);
	ft_puts(hell);
	ft_puts(hel);
	printf("%d\n",ft_strlen("hello"));
	ft_puts(NULL);
	ft_puts("hello World");
	ft_putstr("hello world");
	ft_putchar('Q');
	printf("%d\n", ft_isascii(-57));*/
	//ft_cat(0);
	//ft_putchar('\n');
	return 0;
>>>>>>> 1b932b41be590f7cca0e26fbdeaf0155920d87f1
}
