/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:01:32 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/28 16:12:25 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_get_line(char *memory)
{
	int		i;
	char	*str;

	i = 0;
	if (!memory[i])
		return (NULL);
	while (memory[i] && memory[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (memory[i] && memory[i] != '\n')
	{
		str[i] = memory[i];
		i++;
	}
	if (memory[i] == '\n')
	{
		str[i] = memory[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_memory(char *memory)
{
	int		i;
	int		count;
	char	*str;

	i = 0;
	while (memory[i] && memory[i] != '\n')
		i++;
	if (!memory[i])
	{
		free(memory);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(memory) - i + 1));
	if (!str)
		return (NULL);
	i++;
	count = 0;
	while (memory[i])
		str[count++] = memory[i++];
	str[count] = '\0';
	free(memory);
	return (str);
}

char	*ft_buf(int fd, char *memory)
{
	char	*buf;
	int		bytes;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(memory, '\n') && bytes != 0)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[bytes] = '\0';
		memory = ft_strjoin(memory, buf);
	}
	free(buf);
	return (memory);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*str;
	static char	*buffer[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (NULL);
	str = ft_buf(fd, buffer[fd]);
	if (!str)
		return (NULL);
	line = ft_get_line(str);
	buffer[fd] = ft_memory(str);
	return (line);
}
