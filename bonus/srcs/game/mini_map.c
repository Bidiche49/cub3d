/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audrye <audrye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:11:57 by audrye            #+#    #+#             */
/*   Updated: 2024/01/24 23:32:11 by audrye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/game.h"

void	print_box(t_data *data, int y, int x, int color)
{
	int	i;
	int	j;

	j = 0;
	while (j < 30)
	{
		i = 0;
		while (i < 30)
		{
			put_pixel(data->ptr->img, x * 10 + i, y * 10 + j, color);
			i++;
		}
		j++;
	}
}

int	convert_map_minimap(t_data *data)
{
	int	x;
	int	y;

	y = 0;
	while (data->map[y])
	{
		x = 0;
		while (data->map[y][x])
		{
			if (y == (int)data->player.posy && x == (int)data->player.posx)
				print_box(data, y, x, 65025);
			else if (data->map[y][x] == '1')
				print_box(data, y, x, 0);
			else if (data->map[y][x] == '0')
				print_box(data, y, x, 16777215);
			else if (data->map[y][x] == '2')
				print_box(data, y, x, 4934475);
			x++;
		}
		y++;
	}
	return (1);
}
