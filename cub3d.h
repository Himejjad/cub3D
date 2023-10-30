/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himejjad <himejjad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 07:19:09 by himejjad          #+#    #+#             */
/*   Updated: 2023/10/28 04:40:21 by himejjad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
#define CUB3D_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <mlx.h>
#include <math.h>
# include <ctype.h>
#include <fcntl.h>
#include "get_next_line.h"

typedef struct s_args
{
    char **argv;
    char **av;
    char **copy;
    char **rgb;
    char *str;
    int fd;
    int xp;
    char **copy2;
    int yp;
    int height;
    int width; 
    char *we;
    char *no;
    char *ea;
    char *so;
    char *floor;
    char *cell;
    int floor_r;
    int floor_g;
    int floor_b;
    int cell_r;
    int cell_g;
    int cell_b;
    
}t_args;

void	error(void);
char	*get_next_line(int fd);
t_args * get_map(t_args *args);
char	**ft_split(char *s, char c);
int	count_lines(char **map);
int	check_cub(char *file);
void	check_wall2(t_args *args);
char	*ft_strdup(const char *s1);
#endif