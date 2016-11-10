/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:10:33 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/12 17:02:01 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#define LONGSIZE 8
#define IFRET(x, y) if (x) return (y)
#define DOUBLEINC(x, y) x++; y++;
#define ASSIGN(x,y,a,b) x = y ; a = b;
#define SORRY1 {if (*s5 != *s6)return ((unsigned char)s3 - (unsigned char)s4);
#define SORRY2 SORRY1 DOUBLEINC(s5, s6);n--;}
#define FUCKYOUNORM while (n > 0)SORRY2;return (0);

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned long int	*s3;
	const unsigned long int	*s4;
	const unsigned char		*s5;
	const unsigned char		*s6;

	ASSIGN(s3, (const unsigned long int*)s1, s4, (const unsigned long int*)s2);
	while (n >= LONGSIZE)
	{
		if (*s3 != *s4)
		{
			ASSIGN(s5, (const unsigned char*)s3, s6, (const unsigned char*)s4);
			IFRET(s5[0] != s6[0], s5[0] - s6[0]);
			IFRET(s5[1] != s6[1], s5[1] - s6[1]);
			IFRET(s5[2] != s6[2], s5[2] - s6[2]);
			IFRET(s5[3] != s6[3], s5[3] - s6[3]);
			IFRET(s5[4] != s6[4], s5[4] - s6[4]);
			IFRET(s5[5] != s6[5], s5[5] - s6[5]);
			IFRET(s5[6] != s6[6], s5[6] - s6[6]);
			IFRET(s5[7] != s6[7], s5[7] - s6[7]);
		}
		DOUBLEINC(s3, s4);
		n -= LONGSIZE;
	}
	ASSIGN(s5, (const unsigned char*)s3, s6, (const unsigned char*)s4);
	FUCKYOUNORM;
}
