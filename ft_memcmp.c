/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhabous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:48:29 by tkhabous          #+#    #+#             */
/*   Updated: 2019/10/22 19:48:33 by tkhabous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int			i;
	const unsigned char		*c1;
	const unsigned char		*c2;

	i = 0;
	c1 = s1;
	c2 = s2;
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
