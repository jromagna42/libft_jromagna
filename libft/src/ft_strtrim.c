/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 21:20:36 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/09 22:25:46 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s1;
	char	*s2;
	int		i;
	int		d;

	d = 0;
	i = 0;
	if ((s1 = (char*)malloc(sizeof(char) * (ft_strlen(s)))) == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] != 0)
	{
		s1[d] = s[i];
		i++;
		d++;
	}
	s1[d] = 0;
	d--;
	while (s1[d] == ' ' || s1[d] == '\n' || s1[d] == '\t')
		s1[d--] = '\0';
	s2 = ft_strdup(s1);
	free(s1);
	return (s2);
}
