/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:02:39 by okirca            #+#    #+#             */
/*   Updated: 2022/09/10 15:06:24 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	c;

	c = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
	{
		nb = c * ft_recursive_power (nb, power -1);
	}
	return (nb);
}
int main()
{
	printf("%d", ft_recursive_power(3,-1));
}
