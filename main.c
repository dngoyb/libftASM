#include <stdio.h>
#include <strings.h>
#include "libftasm.h"
int ft_strncmp(char *s, char *d, size_t l);
int    main()
{
    
  //  for(int i = 32; i <= 122; i++)
    //    printf("%c: \t%c\n", i, ft_toupper(i));
    /*    char name[] = "Hello World";
     ft_bzero(name, 4);
     printf("me: %s \tThem: %c\n", name, name[8]);*/
   
     /*   char *ptr = malloc(500);
     ptr = strcpy(ptr, "test");
     printf("%s\n", ptr);
     ft_strncat(ptr, " hitfgfdffgfg", 5);
     printf("%s\n", ptr);*/

    printf("%d\n", ft_strncmp("heLlo", "hello", 3));
       char *str;
      str = ft_strdup("Hello world");
    printf("%s\n", str);
    /*char hel[] = "hello world";
     char hell[] = "Hello me  okay the";
    ft_memset(hel, 'R', 5);
    ft_memcpy(hell, "The best", 8);
     ft_puts(hell);
     ft_puts(hel);*/
    // printf("%d\n",ft_strlen("hello"));
     //ft_puts(NULL);
     //ft_puts("hello World");
    // ft_putstr("hello world");
     //ft_putchar('s');
   //  printf("%d\n", ft_isascii(-57));
   // ft_cat(0);
    //ft_putchar('\n');
    return 0;
}

