/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maze_solv_backtrack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 15:58:52 by flbeaumo          #+#    #+#             */
/*   Updated: 2019/01/13 16:33:20 by flbeaumo         ###   ########.fr       */
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
		ft_putstr("\t\t  ");
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


