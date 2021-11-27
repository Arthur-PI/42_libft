#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void) {
	char	*s1 = "wgw";
	char	*s2 = "";


 	printf("%s\n", strnstr(s1, s2, 0));
	return (0);
}
