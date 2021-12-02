#include <stdio.h>
#include <sys/resource.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "libft.h"

int	main(void) {
	char	*s;
	char	c = ' ';
	char	**tab;
	int		n = 999999;


	s = malloc(n + 1);
	int i = 0;
	while (i < n)
	{
		s[i++] = 'a';
		s[i++] = ' ';
	}
	s[i] = 0;
	tab = ft_split(s, c);
	printf("%p\n", tab);
	free(s);
	return (0);
}
