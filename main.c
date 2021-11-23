#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void) {
    char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
    size_t n = strlen(s2);

    printf("%p\n", strnstr(s1, s2, n));
    printf("%p\n", ft_strnstr(s1, s2, n));
    return (0);
}