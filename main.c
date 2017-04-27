/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:01:55 by lchety            #+#    #+#             */
/*   Updated: 2017/04/27 14:48:50 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "terminoid.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ncurses.h>


void	draw(t_m *dna)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (y < SCREEN_HEIGHT)
	{
		x = 0;
		while (x < SCREEN_WIDTH)
		{
			write(1, " ", 1);
			write(1, &dna->map[x][y], 1);
			//printf("%2c", dna->map[x][y]);
			x++;
		}
		printf("\n");
		y++;
	}


}

void	init_map(t_m *dna)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (y < SCREEN_HEIGHT)
	{
		x = 0;
		while (x < SCREEN_WIDTH)
		{
			dna->map[x][y] = '.';
			x++;
		}
		y++;
	}


}

int		main(int argc, char **argv)
{
	int i;
	t_m dna;

	i = 0;
	init_map(&dna);

	dna.map[5][5] = 'G';

	while (i < 5000)
	{
		system("clear");
		getch ();
		//printf("%d\n", i);
		draw(&dna);
		i++;
	}



	return(0);
}
