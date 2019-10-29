/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <hmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:28:31 by hmoumani          #+#    #+#             */
/*   Updated: 2019/10/25 13:10:20 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char			*st;

	st = (char *)s;
	i = 0;
	while (i < n)
	{
		st[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
