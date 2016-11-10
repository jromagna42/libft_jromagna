/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:42:36 by jromagna          #+#    #+#             */
/*   Updated: 2015/03/30 23:59:18 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	i = ft_strlen(src);
	if (n > i)
	{
		ft_memcpy(dst, src, i);
		ft_bzero(dst + i, n - i);
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
