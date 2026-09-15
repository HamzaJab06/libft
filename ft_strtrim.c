#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

int is_set(char c, char const *set)
{
    int i;

    i = 0;
    while(set[i] != '\0')
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int ind;
    char *trimstr;

    i = 0;
    ind = 0;
    j = ft_strlen(s1) - 1;
    while (is_set(s1[i], set))
        i++;
    if (i > j)
    {
        trimstr = (char *)malloc(1);
        if(!trimstr)
            return (NULL);
    }
    else
    {
        while (is_set(s1[j], set) == 1)
            j--;
        trimstr = (char *)malloc(j - i + 2);
        if(!trimstr)
            return (NULL);
        while (i < j + 1)
            trimstr[ind++] = s1[i++];
    }
    trimstr[ind] = '\0';
    return (trimstr);
}
