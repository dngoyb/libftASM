#include <stdio.h>
#include <strings.h>
//int	ft_isdigit(int i);
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
void	ft_memset(void *s, int c, size_t len);
int	main()
{
	/*for(int i = 57; i <= 100; i++)
		printf("%c: \t%c\n", i, ft_tolower(i));
	char name[] = "Hello World";
	ft_bzero(name, 4);
	printf("me: %s \tThem: %c\n", name, name[8]);*/

/*	char *ptr = malloc(500);
	ptr = strcpy(ptr, "test");
	printf("%s\n", ptr);
	ptr = ft_strcat(ptr, " hitfgfdffgfg");
	printf("%s\n", ptr);
	return 0;*/
	char hel[] = "hello world";
	ft_memset(hel, 'R', 5);
	ft_puts(hel);
	ft_puts(NULL);
	ft_puts("hello World");
	ft_putstr("hello world");
	ft_putchar('Q');
	printf("%d\n", ft_isascii(-57));
	return 0;
}
