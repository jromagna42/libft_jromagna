/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:37:43 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/12 17:29:43 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#define LONGSIZE 8
#define IFRET(x, y) if (x) return (y)
#define IFBREAK(x) if (x) break
#define HI 0x8080808080808080L
#define LO 0x0101010101010101L
#define LONGCHR(l, b) (((((l ^ b) - LO) & ~(l ^ b)) & HI)!=0)

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned long int	*srcp;
	const unsigned char		*srcpc;
	long int				cccc;

	srcp = (const unsigned long int*)s;
	if (n >= 8)
	{
		cccc = (unsigned char)c;
		cccc |= cccc << 8;
		cccc |= cccc << 16;
		cccc |= cccc << 32;
		while (n >= LONGSIZE)
		{
			IFBREAK(LONGCHR(*srcp, cccc) != 0);
			srcp++;
			n -= LONGSIZE;
		}
	}
	srcpc = (const unsigned char*)srcp;
	while (n-- != 0)
	{
		IFRET(*srcpc == (unsigned char)c, (unsigned char*)srcpc);
		srcpc++;
	}
	return (NULL);
}
