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
	char	*s = "  tripouille  42  ";
	char	c = ' ';
	char	**tab;


	tab = ft_split(s, c);
	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		//free(tab[i++]);
		i++;
	}
	//free(tab);
	return (0);
}
