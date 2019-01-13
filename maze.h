/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maze.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 00:14:30 by florian           #+#    #+#             */
/*   Updated: 2019/01/13 16:14:42 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAZE_H
# define MAZE_H
# define RED "\033[0;31m"
# define GRE "\033[0;32m"
# define BLU "\033[0;34m"
# define PUR "\033[0;35m"
# define NC "\033[0m"

# include "libft/includes/libft.h"

typedef struct	s_mouse
{
	int	x;
	int y;;
}				t_mouse;

int		find_path(int maze[5][5], int i, int j, int n);
void	display(int maze[5][5]);

#endif
