#include <string.h>
#include <stdio.h>
#include "libft.h"

static char	cesar(unsigned int nul, char c)
{
	(void)nul;
	return (((c - 'a') + 1) % 25 + 'a');
}

int	main(void) {
	printf("%s\n", ft_strmapi("oui", &cesar));
	return (0);
}
