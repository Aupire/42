/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_prime.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:50:25 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/18 11:13:27 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long i;
	long j;

	j = nb;
	i = 1;
	if (j < 0)
		return (0);
	while (i * i < j)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int i;
	long racine;

	i = 2;
	if (nb > 25000)
		racine = ft_sqrt(nb);
	while (nb % i != 0 && i < (nb - 1))
		i++;
	if (nb % i == 0)
		return (0);
	return (1);
}

int	ft_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (0);
}




#include <stdio.h>
int	main()
{
	printf("%d\n", ft_next_prime(2147483647));
	return (0);
}

