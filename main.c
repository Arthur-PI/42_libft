#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void) {
	char	*s = "       split       this   for mee      !      ";
	char	**res;

	res = ft_split(s, ' ');
	for(int i=0; res[i] != 0; i++)
	{
		printf("%s\n", res[i]);
	}
    return (0);
}
