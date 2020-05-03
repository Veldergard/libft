/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurine <olaurine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 23:16:54 by olaurine          #+#    #+#             */
/*   Updated: 2020/05/03 16:16:15 by olaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc()) and returns a substring
** from the string ’s’.
** The substring begins at index ’start’ and is of
** maximum size ’len’.
**
** char const *s - The string from which to create the substring.
** unsigned int start - The start index of the substring in the string ’s’.
** size_t len - The maximum length of the substring.
**
** Return the substring. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*substr;

	if (!s)
		return (NULL);
	size = start;
	while (size - start < len && s[size])
	{
		if (size + 1 < size)
			return (NULL);
		size++;
	}
	if (size - start + 1 < size - start)
		return (NULL);
	substr = (char*)malloc((size - start + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	size = start;
	while (size - start < len && s[size])
	{
		substr[size - start] = s[size];
		size++;
	}
	substr[size - start] = '\0';
	return (substr);
}
