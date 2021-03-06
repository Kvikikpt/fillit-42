/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:50:31 by cnikia            #+#    #+#             */
/*   Updated: 2019/04/13 19:44:14 by cnikia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_strclr(char *s)
{
	size_t	a;

	a = 0;
	if (s)
	{
		while (s[a])
		{
			s[a] = '\0';
			a++;
		}
	}
}
