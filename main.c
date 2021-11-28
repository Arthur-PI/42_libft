#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void) {
	char	*s1 = "";
	char	*s2 = "ab";
	char	*s3 = NULL;


 	printf("%s;%s\n", ft_strnstr(s1, s1, 0), strnstr(s1, s1, 0));
 	printf("%s;%s\n", ft_strnstr(s1, s2, 0), ft_strnstr(s1, s2, 0));
 	printf("%s;%s\n", ft_strnstr(s2, s1, 0), ft_strnstr(s2, s1, 0));
 	printf("%s;%s\n", ft_strnstr(s2, s2, 0), ft_strnstr(s2, s2, 0));
 	printf("%s;%s\n", ft_strnstr(s3, s1, 0), ft_strnstr(s3, s1, 0));
 	printf("%s;%s\n", ft_strnstr(s3, s2, 0), ft_strnstr(s3, s2, 0));
 	printf("%s;%s\n", ft_strnstr(s1, s3, 0), ft_strnstr(s1, s3, 0));
 	printf("%s;%s\n", ft_strnstr(s2, s3, 0), ft_strnstr(s2, s3, 0));
 	printf("%s;%s\n", ft_strnstr(s3, s3, 0), ft_strnstr(s3, s3, 0));
	return (0);
}
