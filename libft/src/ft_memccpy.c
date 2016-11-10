/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:32:57 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/09 16:53:40 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#define LONGSIZE 8
#define IFRET(x, y) if (x) return (y)
#define IFBREAK(x) if (x) break
#define HI 0x8080808080808080L
#define LO 0x0101010101010101L
#define LONGCHR(l, b) (((((l ^ b) - LO) & ~(l ^ b)) & HI)!=0)
#define LONGFILL(cl, c) cl = c; cl |= cl << 8; cl |= cl << 16; cl |= cl << 32
#define DOUBLEINC(x, y) x++; y++;
#define SORRYNORM {IFBREAK(LONGCHR(*srcp, cccc) != 0); SORRYNORM2
#define SORRYNORM2 *dstp++ = *srcp++;n -= LONGSIZE;}

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned long int	*srcp;
	unsigned long int		*dstp;
	const unsigned char		*srcpc;
	unsigned char			*dstpc;
	long int				cccc;

	srcp = (const unsigned long int*)src;
	dstp = (unsigned long int*)dst;
	if (n >= 8)
	{
		LONGFILL(cccc, (unsigned char)c);
		while (n >= LONGSIZE)
			SORRYNORM;
	}
	srcpc = (const unsigned char*)srcp;
	dstpc = (unsigned char*)dstp;
	while (n-- != 0)
	{
		*dstpc = *srcpc;
		IFRET(*dstpc == (unsigned char)c, dstpc + 1);
		DOUBLEINC(dstpc, srcpc);
	}
	return (NULL);
}
