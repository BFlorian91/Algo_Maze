/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 12:50:37 by florian           #+#    #+#             */
/*   Updated: 2019/01/13 13:55:35 by florian          ###   ########.fr       */
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

int		find_path(int maze[5][5], int i, int j, int n)
{
	if (i == n - 1 && j == n - 1)
	{
		maze[i][j] = 3;
		return (1);
	}
	printf(BLU"Mouse path"PUR" -> "GRE"[x:%d -- y:%d]"NC"\n", i, j);
	if (maze[i][j] == 1)
	{
		maze[i][j] = 3;
		if (find_path(maze, i, j + 1, n) == 1)
			return (1);
		if (find_path(maze, i + 1, j, n) == 1)
			return (1);
		maze[i][j] = 0;
	}
	return (0);
}


int		main(void)
{
	int		maze[5][5] =
	{ 1, 0, 0, 1, 0,
	  1, 1, 1, 1, 0,
	  1, 1, 0, 0, 1,
	  0, 1, 0, 1, 0,
	  1, 1, 1, 1, 1 };
	find_path(maze, 0, 0, 5);
	display(maze);
	return (0);
}
