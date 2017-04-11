/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 15:27:37 by lyoung            #+#    #+#             */
/*   Updated: 2017/04/11 11:14:28 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "/nfs/2017/l/lyoung/42/get_next_line.git/libft/libft.h"
# include <fcntl.h>
# include <stdio.h> //make sure to remove
# define BUFF_SIZE 1000

int		get_next_line(const int fd, char **line);

#endif
