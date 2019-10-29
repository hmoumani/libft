/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <hmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:41:45 by hmoumani          #+#    #+#             */
/*   Updated: 2019/10/27 20:20:56 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*f_string;
	unsigned char	*s_string;

	i = 0;
	f_string = (unsigned char *)dst;
	s_string = (unsigned char *)src;
	while (n > i)
	{
		f_string[i] = s_string[i];
		if (s_string[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
