/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maze_solv_backtrack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 15:58:52 by flbeaumo          #+#    #+#             */
/*   Updated: 2019/01/13 17:07:10 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "maze.h"
#include <stdio.h>

void	display(int maze[10][10])
{
	int		i;
	int		j;

	i = 0;
	ft_putchar('\n');
	while (i < 10)
	{
		j = 0;
		ft_putstr(" | ");
		while (j < 10)
		{
			ft_putnbr(maze[i][j++]);
			ft_putstr(" | ");
		}
		ft_putchar('\n');
		ft_putstr("   _   _   _   _   _   _   _   _   _   _ \n\n");
		i++;
	}
}

int		find_path(int maze[10][10], int i, int j, int n)
{
	if (i == n - 1 && j == n - 1)
	{
		maze[i][j] = 8;
		return (1);
	}
	printf(BLU"Mouse path"PUR" -> "GRE"[x:%d -- y:%d]"NC"\n", i, j);
	if (maze[i][j] == 1)
	{
		maze[i][j] = 8;
		if (find_path(maze, i, j + 1, n) == 1)
			return (1);
		if (find_path(maze, i + 1, j, n) == 1)
			return (1);
		maze[i][j] = 0;
	}
	return (0);
}
