#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


char 	*ft_strrev(char *str)
{
	int size;
	char tmp;
	int i;

	i = 0;
	size = ft_strlen(str) - 1;

	while (i <= size/2)
	{
		tmp = str[i];
		str[i] = str[size -i];
		str[size - i] = tmp;
		i++;
	}
	return (str);
}

int main()
{
	printf("%s", ft_strrev("hello"));
}

