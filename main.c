
#include "libft.h"
int main(int argc, char const *argv[])
{
	char str[] = "hello";
	char *asd = ft_strdup(str);
	ft_putstr_fd(asd,1);
	return 0;
}
