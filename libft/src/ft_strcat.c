/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:44:55 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/12 16:52:51 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	ft_memcpy(&s1[i], s2, j);
	s1[i + j] = '\0';
	return (s1);
}
