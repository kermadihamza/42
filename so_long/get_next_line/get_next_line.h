/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:02:03 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/08 12:15:27 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# define BUFFER_SIZE 1024

char	*get_next_line(int fd);
char	*ft_get_line(char *memory);
char	*ft_memory(char *memory);
char	*ft_buf(int fd, char *memory);
size_t	ft_strlen2(const char *str);
char	*ft_strjoin2(char *s1, char *s2);
char	*ft_strchr2(char *s, int c);

#endif