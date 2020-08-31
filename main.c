/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 16:27:03 by srazack-          #+#    #+#             */
/*   Updated: 2020/08/31 18:38:37 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_lib.h"
#include <stdio.h>
int main ()
{
	int f; 
	char str[10000];
	char *grid;
	int l;
	struct s_cord *s_block;
	int cs;

	f = open("bof", O_RDONLY);
	init_1(f, str);
	l = ft_strlen(str);
	grid =(char *)malloc(sizeof(char)*l*l);
	init_grid(str, grid, l);
	cs = search_block(grid, l);
	s_block =(struct s_cord *)malloc(sizeof(struct s_cord) * cs);
	id_block(s_block, grid, l, cs);

	/*display_grid(grid, l);*/








	return 0;
}
