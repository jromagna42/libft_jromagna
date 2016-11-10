/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:32:39 by jromagna          #+#    #+#             */
/*   Updated: 2015/03/30 23:49:41 by jromagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#define HI 0x8080808080808080L
#define LO 0x0101010101010101L
#define IFRET(x, y) if (x) return (y)
#define SORRY 	{if (*ptr == '\0')return (ptr - str);ptr++;}

size_t		ft_strlen(const char *str)
{
	const char				*ptr;
	const unsigned long int	*longword_p;
	unsigned long int		longword;

	ptr = str;
	while (((unsigned long int)ptr & (sizeof(longword) - 1)) != 0)
		SORRY;
	longword_p = (unsigned long int *)ptr;
	while ((longword = *longword_p++) || 1)
		if (((longword - LO) & HI) != 0)
		{
			ptr = (const char *)(longword_p - 1);
			IFRET(ptr[0] == 0, ptr - str);
			IFRET(ptr[1] == 0, ptr - str + 1);
			IFRET(ptr[2] == 0, ptr - str + 2);
			IFRET(ptr[3] == 0, ptr - str + 3);
			IFRET(ptr[4] == 0, ptr - str + 4);
			IFRET(ptr[5] == 0, ptr - str + 5);
			IFRET(ptr[6] == 0, ptr - str + 6);
			IFRET(ptr[7] == 0, ptr - str + 7);
		}
}
