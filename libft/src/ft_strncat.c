/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:35:55 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/12 17:15:21 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	char	c;
	char	*s;

	i = ft_strlen(s1);
	s = s1 + i;
	while (n > 0)
	{
		c = *s2++;
		*s++ = c;
		if (c == '\0')
			return (s1);
		n--;
	}
	if (c != '\0')
		*s = '\0';
	return (s1);
}
