/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 03:51:49 by emekinci          #+#    #+#             */
/*   Updated: 2022/10/19 03:51:50 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL || !s)
		return (NULL);
	while (len-- && start < ft_strlen(s))
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
