/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 23:08:47 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/12 23:34:45 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		ti;
	char	**tab;
	int		h;

	i = 0;
	ti = 0;
	if ((tab = (char**)malloc(sizeof(char *) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	while (s[i])
	{
		h = 0;
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		while (s[i + h] && s[i + h] != c)
			h++;
		tab[ti] = ft_strsub(s, i, h);
		i = i + h;
		ti++;
	}
	tab[ti] = NULL;
	return (tab);
}
