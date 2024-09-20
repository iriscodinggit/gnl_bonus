/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irlozano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:11:51 by irlozano          #+#    #+#             */
/*   Updated: 2024/09/10 21:11:55 by irlozano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*read_and_update(int fd, char *stash);
char	*extract_line(char *stash);
char	*static_garbage(char *stash);

char	*free_variable(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *str, char c);
char	*ft_strdup(char *s1);
size_t	ft_strlen(char *str);

#endif
