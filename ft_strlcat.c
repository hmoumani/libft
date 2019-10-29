/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <hmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:54:48 by hmoumani          #+#    #+#             */
/*   Updated: 2019/10/28 20:16:18 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ldst;
	size_t	lsrc;
	int		free;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	free = size - ldst;
	i = 0;
	j = ldst;
	if (free < 0 || size == 0)
		return (size + lsrc);
	if ((size_t)free > lsrc)
	{
		while (i < lsrc + 1)
			dst[j++] = src[i++];
		return (ldst + lsrc);
	}
	while (free-- > 1)
		dst[j++] = src[i++];
	dst[j++] = '\0';
	return (ldst + lsrc);
}
