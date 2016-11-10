/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:30:10 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/07 16:11:44 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#define LONGSIZE 8

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned long int			*srcp;
	unsigned long int				*dstp;
	const unsigned char				*srcpc;
	unsigned char					*dstpc;

	srcp = (const unsigned long int*)src;
	dstp = (unsigned long int*)dst;
	while (n >= LONGSIZE)
	{
		*dstp++ = *srcp++;
		n -= LONGSIZE;
	}
	srcpc = (const unsigned char*)srcp;
	dstpc = (unsigned char*)dstp;
	while (n-- != 0)
		*dstpc++ = *srcpc++;
	return (dst);
}
