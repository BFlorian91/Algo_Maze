/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maze.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 00:15:10 by florian           #+#    #+#             */
/*   Updated: 2019/01/13 13:50:07 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maze.h"
#include <stdio.h>

void	display(int maze[5][5])
{
	int		i;
	int		j;

	i = 0;
	ft_putchar('\n');
	while (i < 5)
	{
		j = 0;
		while (j < 5)
			ft_putnbr(maze[i][j++]);
		ft_putchar('\n');
		i++;
	}
}

int		move(int maze[5][5], t_mouse mouse)
{
	int	i;
	int	j;
	int k;

	i = 0;
	j = 0;
	k = 1;
	mouse.x = 0;
	mouse.y = 0;
	maze[i][j] = 8;
	while (mouse.x < 4)
	{
		printf("Position %d de la souris: [ %d, %d ]\n", k, mouse.x, mouse.y);
		if (mouse.y < 4 && maze[++i][j] != 0)
		{
			maze[i][j] = 8;
			while (mouse.x < 4 && maze[i][++j] != 0)
			{
				maze[i][j] = 8;
			}
		}
		else if (mouse.x < 4 && maze[i][++j] != 0)
		{
			maze[i][j] = 8;
		}
		mouse.x = j;
		mouse.y = i;
		k++;
	}
	display(maze);
	return (1);
}

int		main(void)
{
	t_mouse		rat;
	int		maze[5][5] =
	{ 1, 0, 0, 1, 0,
	  1, 1, 0, 0, 0,
	  1, 1, 0, 0, 1,
	  0, 1, 0, 1, 0,
	  1, 1, 1, 1, 1 };

	  move(maze, rat);
	return (0);
}
