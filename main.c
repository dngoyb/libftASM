#include <stdio.h>
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
{
	/*for(int i = 57; i <= 100; i++)
		printf("%c: \t%c\n", i, ft_tolower(i));
	char name[] = "Hello World";
	ft_bzero(name, 4);
	printf("me: %s \tThem: %c\n", name, name[8]);*/

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
}
