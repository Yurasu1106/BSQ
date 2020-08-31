/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 16:18:29 by srazack-          #+#    #+#             */
/*   Updated: 2020/08/31 18:37:04 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_lib.h"

void display_grid(char *grid, int l)
{
	int i;
	int j;

	j = 0;
	while (j < l)
	{
		while(i < l)
		{
			ft_putchar(grid[i * l + j]);
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}

char *init_1(int f, char *str)
{
	int r;
	int i;
	r = 5;
	i = 0;
	char a[10000];	
	read(f, a, 10000);
	while (a[r] == '.' || a[r] == 'o'|| a[r] == '\n')
	{
		str[i] = a[r];
		i++;
		r++;
	}
	str[r] = '\0';

	return (str);
}

void init_grid(char *str, char *grid, int l)
{
	int i;
	int j;

	j = 0;
	while (j < l)
	{
		i = 0;
		while (i < l)
		{
			grid[i * l + j] = str[i];
			i++;
		}
		j++;
	}
}
int search_block(char *grid, int l)
{
	int i;
	int j;
	int c;
	
	c = 0;
	j = 0;
	while (j < l)
	{
		i = 0;
		while (i < l)
		{
			if(grid[i * l +j] == 'o')
				c++;
			
			i++;
		}
		j++;
	}
	return c;
}

void id_block(struct s_cord *tab, char *grid, int l, int cs)
{
	int i;
	int j;
	int c;
	
	c = 0;
	j = 0;
	while (j < l)
	{
		i = 0;
		while (i < l)
		{
			if(grid[i * l +j] == 'o')
			{
				tab[c].x = i;
				tab[c].y = j;
				c++;
			}

			i++;
		}
		j++;
	}
}




