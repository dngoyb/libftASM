#include <stdio.h>

int	my_puts(const char *s)
{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return i;
}

int	main(void)
{
	puts(NULL);
	return (my_puts("Hello World"));
}
