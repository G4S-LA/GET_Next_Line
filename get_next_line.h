/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmetallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 16:10:42 by dmetallo          #+#    #+#             */
/*   Updated: 2019/09/23 16:10:46 by dmetallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1
# include <fcntl.h>
# include "libft/libft.h"

int get_next_line(const int fd, char **line);
int get_line(const int fd, char **line, char **s);

#endif
