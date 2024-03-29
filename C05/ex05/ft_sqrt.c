/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:31:41 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/17 21:47:59 by gfaure-l         ###   ########.fr       */
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
	if (i * i == j)
		return (i);
	return (0);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_sqrt(2147395600));
	return (0);
}
