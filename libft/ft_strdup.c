/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 00:16:06 by oibis             #+#    #+#             */
/*   Updated: 2022/02/09 14:38:18 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Bu işlev boş karakter sonlandırmalı s dizgesini yeni bir 
bellek alanına kopyalar. 
Yeni dizge için yer ayırma işlemi malloc ile yapılır. 
malloc yeni dizge için yer ayıramazsa işlev boş gösterici ile döner, 
aksi takdirde yeni dizge için bir gösterici ile döner.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
