#include <unistd.h>
int ft_write_number(number)
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10],1);
	return (number);
}
int main()
{
	int i ;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1,"fizzbuzz",8);
		else if (i % 3 == 0 )
			write(1, "fizz", 4);
		else if ( i % 5 == 0)
			write (1, "buzz", 4);
		else 
			ft_write_number(i);
		write(1, "\n",1);
		i++;
	}
}
