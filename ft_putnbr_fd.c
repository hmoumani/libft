/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <hmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 21:05:06 by hmoumani          #+#    #+#             */
/*   Updated: 2019/10/24 23:15:41 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int result;

	result = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		result = -((unsigned int)n);
	}
	else
		result = n;
	if (result < 10)
		ft_putchar_fd(result + 48, fd);
	else
	{
		ft_putnbr_fd(result / 10, fd);
		ft_putchar_fd((result % 10) + 48, fd);
	}
}
