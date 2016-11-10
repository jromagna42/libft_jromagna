/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:43:05 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/09 16:09:51 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = ft_strlen(src);
	ft_memcpy(dst, src, i);
	dst[i] = '\0';
	return (dst);
}
