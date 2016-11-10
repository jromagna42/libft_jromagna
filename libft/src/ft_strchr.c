/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:50:21 by jromagna          #+#    #+#             */
/*   Updated: 2014/11/12 16:53:12 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#define LONGSIZE 8
#define IFRETEIFRETNULL(x, y, z) if (x) return (y); else if(z) return (NULL)
#define VID 0x0000000000000000L
#define HI 0x8080808080808080L
#define LO 0x0101010101010101L
#define LONGCHR(l, b) (((((l ^ b) - LO) & ~(l ^ b)) & HI)!=0)
#define LONGFILL(cl, c) cl = c; cl |= cl << 8; cl |= cl << 16; cl |= cl << 32
#define SORRY {IFRETEIFRETNULL(*ptr == pc, (char*)ptr, ptr[0] == '\0');ptr++;}

char	*ft_strchr(const char *str, int c)
{
	char					pc;
	const unsigned char		*ptr;
	const unsigned long int	*longword_p;
	unsigned long int		longw;
	long int				cccc;

	pc = (unsigned char)c;
	ptr = (const unsigned char*)str;
	while (((unsigned long int)ptr & (sizeof(longw) - 1)) != 0)
		SORRY;
	LONGFILL(cccc, c);
	longword_p = (unsigned long int *)ptr;
	while ((longw = *longword_p++) || 1)
		if (LONGCHR(*(longword_p - 1), cccc) != 0 || ((longw - LO) & HI) != 0)
		{
			ptr = (const unsigned char *)(longword_p - 1);
			IFRETEIFRETNULL(ptr[0] == pc, (char*)ptr, !ptr[0]);
			IFRETEIFRETNULL(ptr[1] == pc, (char*)ptr + 1, !ptr[1]);
			IFRETEIFRETNULL(ptr[2] == pc, (char*)ptr + 2, !ptr[2]);
			IFRETEIFRETNULL(ptr[3] == pc, (char*)ptr + 3, !ptr[3]);
			IFRETEIFRETNULL(ptr[4] == pc, (char*)ptr + 4, !ptr[4]);
			IFRETEIFRETNULL(ptr[5] == pc, (char*)ptr + 5, !ptr[5]);
			IFRETEIFRETNULL(ptr[6] == pc, (char*)ptr + 6, !ptr[6]);
			IFRETEIFRETNULL(ptr[7] == pc, (char*)ptr + 7, !ptr[7]);
		}
}
