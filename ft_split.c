/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:08:25 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/15 15:35:06 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_words(char const *str, char c)
{
    int i,count;
    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (str[i] != c)
        {
            count++;
            i++;
            while (str[i] != c && str[i] != '\0')
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    return count;
}

char **assign(char const *str, char c, char **list)
{
    int i;
    int j;
    int count;
    int s;
    int word_ind;

    i = 0;
    count = 0;
    j = 0;
    s = 0;
    while (str[i] != '\0')
    {
        if (str[i] != c)
        {
            count = 0;
            while (str[i] != c && str[i] != '\0')
            {
                count++;
                i++;
            }
            word_ind = i - count;
            list[j] = (char *)malloc(count + 1);
            if (!list[j])
		    return (NULL);
	    s = 0;
            while (word_ind < i)
                (list[j])[s++] = str[word_ind++];
            (list[j])[s] = '\0';
        }
        i++;
    }
    list[++j] = NULL;
    return (list);
}

char	**ft_split(char const *s, char c)
{
	char **list;
    	if (count_words(s, c) == 0)
    	{
        	list = (char **)malloc(sizeof(char *) * 1);
		if (!list)
			return (NULL);
        	*list = NULL;
		return (list);
    	}
    	else 
    	{
        	list = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
        	if (!list)
            		return NULL;
       		return (assign(s, c, list));
    	}
}
