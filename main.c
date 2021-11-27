#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void) {
	char *s;

	s = ft_itoa(2147483647);
 	printf("%s\n", s);
	strlcpy(s, s, 1245151521);
	free(s);
	return (0);
}
