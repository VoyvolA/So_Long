/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 03:55:26 by emekinci          #+#    #+#             */
/*   Updated: 2022/10/19 03:55:27 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	err_msg(char *msg)
{
	ft_printf("%s", msg);
	exit(0);
}

int	mouse_hook(int mousecode, t_data *data)
{
	(void)mousecode;
	(void)data;
	err_msg("Exit Success");
	return (0);
}

void	exit_door(t_data *data)
{
	if (data->coin_collected == data->coin_count)
		err_msg("FINISH");
	else
		ft_printf("Sorry, you can't exit.\n");
}
