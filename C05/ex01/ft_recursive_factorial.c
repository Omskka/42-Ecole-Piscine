/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:06:36 by okirca            #+#    #+#             */
/*   Updated: 2022/09/10 12:06:48 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	c;

	c = 1;
	if (nb > 0)
	{
		c = nb * ft_recursive_factorial(nb - 1);
		nb --;
	}
	if (nb < 0)
		return (0);
	return (c);
}

int	main(void)
{
	printf("%i", ft_recursive_factorial(0));
}
