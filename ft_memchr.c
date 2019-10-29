/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <hmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:57:17 by hmoumani          #+#    #+#             */
/*   Updated: 2019/10/27 20:23:34 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*string;

	i = 0;
	string = (char *)s;
	while (n > i)
	{
		if (((unsigned char *)string)[i] == (unsigned char)c)
			return (void *)(s + i);
		i++;
	}
	return (NULL);
}
