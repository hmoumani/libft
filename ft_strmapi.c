/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <hmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:32:24 by hmoumani          #+#    #+#             */
/*   Updated: 2019/10/25 14:46:10 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
			int, char))
{
	int		size;
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	str = (char *)ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (str);
	while (i < size)
	{
		str[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	return (str);
}
