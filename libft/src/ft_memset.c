/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:35:58 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/12 16:50:21 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#define LONGSIZE 8
#define LONGFILL(cl, c) cl = c; cl |= cl << 8; cl |= cl << 16; cl |= cl << 32
#define SLONGFILL(p, c) *(p) = c; *(p + 1) = c; *(p + 2) = c; *(p + 3) = c
#define CHARWHILE {((unsigned char*)b)[0] = c; b++; len--;}
#define LONGWHILE1 {ptr = (long int*)b;SLONGFILL(&ptr[0], cccc); LONGWHILE2
#define LONGWHILE2 SLONGFILL(&ptr[4], cccc);b += 8 * LONGSIZE;i--;}

void	*ft_memset(void *bp, int c, size_t len)
{
	long int		b;
	long int		*ptr;
	long int		cccc;
	int				i;

	b = (long int)bp;
	if (len >= 8)
	{
		LONGFILL(cccc, c);
		while (b % LONGSIZE != 0)
		{
			((unsigned char*)b)[0] = c;
			b++;
			len--;
		}
		i = len / (8 * LONGSIZE);
		while (i > 0)
			LONGWHILE1;
		len = len % (LONGSIZE * 8);
	}
	while (len > 0)
		CHARWHILE;
	return (bp);
}
