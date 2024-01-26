/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngalvez- <ngalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:20:20 by ngalvez-          #+#    #+#             */
/*   Updated: 2023/10/31 10:35:14 by ngalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

/**
 * @brief length of a string, without the null terminator
 * 
 * @param str string to be measured
 * @return int length of the string
*/
int		ft_strlen(char *str);

/**
 * @brief search for a character in a string
 * 
 * @param str string to be searched
 * @param c character to be found
 * @return char* pointer to the first occurence of the character
 * in the string, or NULL if not found
*/
char	*ft_strchr(char *str, int c);

/**
 * @brief allocate with malloc and return a new string, 
 * 
 * @param s1 prefix string
 * @param s2 suffix string
 * @return char* new string, result of the concatenation of s1 and s2
 * or NULL if the allocation fails
*/
char	*ft_strjoin(char *s1, char *s2);

/**
 * @brief Reads a line from a file descriptor
 * 
 * @param fd file descriptor to read from
 * @return char* the line that was read, or NULL if there was an error
*/
char	*get_next_line(int fd);

char	*ft_line(char *str);
char	*ft_save(char *str);
char	*ft_read(int fd, char *str);

#endif