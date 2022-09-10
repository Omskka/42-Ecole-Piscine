/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:26:26 by okirca            #+#    #+#             */
/*   Updated: 2022/09/10 11:47:35 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative(int nb)
{
	int	c;

	c = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (c > 0)
	{
		nb = nb * c;
		c--;
	}
	return (nb);
}

int main()
{
	printf("%d",ft_iterative(0));
}
