/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <hmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:05:07 by hmoumani          #+#    #+#             */
/*   Updated: 2019/10/25 14:44:49 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1size;
	int		s2size;
	char	*p;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	s1size = ft_strlen(s1);
	s2size = ft_strlen(s2);
	p = (char *)ft_calloc(s1size + s2size + 1, sizeof(char));
	i = 0;
	if (p == NULL)
		return (NULL);
	while (i < s1size + s2size)
	{
		if (i < s1size)
			p[i] = (char)s1[i];
		else
			p[i] = (char)s2[j++];
		i++;
	}
	return (p);
}
