#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t remain;
    size_t substr_size;
    size_t i;
    char *substr;

    i = 0;
    if (len == 0 || ft_strlen(s) < start)
    {        substr = malloc(1);
            if (!substr)
                return (NULL);
    }
    else
    {
        remain = ft_strlen(s) - start;
        if (remain >= len)
            substr_size = len + 1;
        else
            substr_size = remain + 1;
        substr = (char *)malloc(substr_size);
        if(!substr)
            return(NULL);
        while (i < substr_size - 1)
        {
            substr[i] = s[start + i];
            i++;
        }
    }
    substr[i] = '\0';
    return (substr);
}
