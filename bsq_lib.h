/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_lib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 15:52:20 by srazack-          #+#    #+#             */
/*   Updated: 2020/08/31 18:37:14 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_LIB
#define BSQ_LIB

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
struct s_cord{
	int x;
	int y;
};
int ft_strlen(char *str);
char *init_1(int f, char *str);
void init_grid(char *str, char *grid, int l);
void ft_putchar(char c);
void display_grid(char *grid, int l);
int search_block(char *grid, int l);
void id_block(struct s_cord *tab, char *grid, int l, int cs);
#endif
