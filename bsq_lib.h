/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_lib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 15:52:20 by srazack-          #+#    #+#             */
/*   Updated: 2020/08/31 17:17:37 by srazack-         ###   ########lyon.fr   */
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
char *init_grid(char *str, char *grid);
#endif
