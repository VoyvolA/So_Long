/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 03:50:42 by emekinci          #+#    #+#             */
/*   Updated: 2022/10/19 03:50:43 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			a;

	a = ft_strlen(s);
	while (a >= 0)
	{
		if (s[a] == (char)c)
			return ((char *)&s[a]);
		a--;
	}
	return (0);
}
