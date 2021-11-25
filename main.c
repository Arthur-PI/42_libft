#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void) {
    char n[40] = "99999999999999999999999999";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

    printf("%d\n", i1);
    printf("%d\n", i2);
    return (0);
}
