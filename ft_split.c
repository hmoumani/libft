/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:25:53 by hmoumani          #+#    #+#             */
/*   Updated: 2019/10/28 21:52:12 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**ft_failed(char **tab, int n)
{
	while (n >= 0)
		free((void *)tab[n--]);
	free((void *)tab);
	return (NULL);
}

static	int		ft_count_words(char *str, char c)
{
	int count;
	int i;

	if (!*str)
		return (0);
	count = 0;
	i = 1;
	if (str[0] != c)
		count++;
	while (str[i])
	{
		if (str[i] != c && str[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static	int		getstart(int *i, char *str, char c)
{
	while (str[*i] == c && str[*i] != '\0')
		*i += 1;
	return (*i);
}

static	int		getend(int *i, char *str, char c)
{
	while (str[*i] != c && str[*i] != '\0')
		*i += 1;
	return (*i);
}

char			**ft_split(char const *s, char c)
{
	int		start;
	int		end;
	int		i;
	int		j;
	char	**p;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	p = (char **)malloc((ft_count_words((char *)s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (j < ft_count_words((char *)s, c))
	{
		start = getstart(&i, (char *)s, c);
		end = getend(&i, (char *)s, c);
		if (!(p[j++] = ft_substr(s, start, end - start)))
			return (ft_failed(p, ft_count_words((char *)s, c)));
	}
	p[j] = NULL;
	return (p);
}
