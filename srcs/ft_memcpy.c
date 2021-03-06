/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:28 by nburat-d          #+#    #+#             */
/*   Updated: 2022/06/12 11:35:39 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_args.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;
	int		i;

	if (!dest && !src)
		return (NULL);
	ptrdest = (char *)dest;
	ptrsrc = (char *)src;
	i = 0;
	while (n-- > 0)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}
