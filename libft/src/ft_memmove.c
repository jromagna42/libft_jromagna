/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:54:03 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/12 16:49:52 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#define LONGSIZE 8

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dstp;
	char			*srcp;

	dstp = (char*)dst;
	srcp = (char*)src;
	if (src <= dst && src + len >= dst)
	{
		while (len != 0)
		{
			*(dstp + len - 1) = *(srcp + len - 1);
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
