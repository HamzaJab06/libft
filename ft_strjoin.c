#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t total_size;
    size_t i;
    char *joinstr;

    i = 0;
    total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
    joinstr = (char *)malloc(total_size);
    if (!joinstr)
        return (NULL);
    while (s1[i] != '\0')
    {
        joinstr[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        joinstr[ft_strlen(s1) + i] = s2[i];
        i++;
    }
    joinstr[ft_strlen(s1) + i] = '\0';
    return (joinstr);    
}
