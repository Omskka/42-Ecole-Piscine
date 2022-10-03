#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == 45)
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
	{
		sign *= 1;
		i++;
	}
	while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
	{
		result *= 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result * sign);
}



int main()
{
	
	printf("%d", ft_atoi("  -897abc"));
}

