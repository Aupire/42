/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 23:33:47 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/18 14:41:28 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab = NULL;
	int i;

	if (min >= max)
		return (0);

	i = 0;
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (0);
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

#include <stdio.h>
int	main()
{
	int n = 0;
	int *ta;
	ta = ft_range(2,9);
	while (ta[n])
	{
		printf("%d\n", ta[n]);
		n++;
	}
}
