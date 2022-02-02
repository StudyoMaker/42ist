#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	int	i;

	i = len;
	str = (char *)b;
	while (i >= 0)
	{
		str[i] = c;
		i--;
	}
	return (b);
}
int main()
{
	char a[]="bubirdeneme kontrol";
	printf("%s", ft_memset(a,'z',14));
}