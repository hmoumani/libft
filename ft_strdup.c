/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <hmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:06:34 by hmoumani          #+#    #+#             */
/*   Updated: 2019/10/17 21:19:53 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*p;
	unsigned	int	i;

	i = 0;
	p = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		*(p + i) = *(s + i);
		i++;
	}
	return (p);
}
