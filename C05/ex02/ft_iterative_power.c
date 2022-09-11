/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:31:17 by okirca            #+#    #+#             */
/*   Updated: 2022/09/11 12:54:22 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	i;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	c = nb;
	i = 0;
	while (i <= power)
	{
		nb = nb * c;
		i++;
	}
	return (nb);
}
