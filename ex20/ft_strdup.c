/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 20:02:24 by vjacks            #+#    #+#             */
/*   Updated: 2018/11/23 18:10:43 by vjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		length;

	length = 0;
	while (src[length] != '\0')
		length++;
	new = (char*)malloc(sizeof(char) * (length + 1));
	if (new == NULL)
		return (NULL);
	return (ft_strcpy(new, src));
}
