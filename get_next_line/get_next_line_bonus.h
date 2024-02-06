#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);

char	*ft_line(char *str);
char	*ft_save(char *str);
char	*ft_read(int fd, char *str);
char	*get_next_line(int fd);

#endif