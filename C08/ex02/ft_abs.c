/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfaure-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:07:30 by gfaure-l          #+#    #+#             */
/*   Updated: 2019/09/19 16:17:47 by gfaure-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_abs.h"
#include <stdio.h>

int	main()
{
	int a = -60;
	printf("%d\n", a);
	ABS(a);
	printf("%d\n", a);
	((a <= 0) ? a *= (-1) : a);
	printf("%d\n", a);
	return 0;
}
