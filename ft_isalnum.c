/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurine <olaurine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 20:41:16 by olaurine          #+#    #+#             */
/*   Updated: 2020/05/03 03:45:01 by olaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_isalnum()
** checks for an alphanumeric character; it is
** equivalent to (isalpha(c) || isdigit(c)).
**
** int c - character
**
** The values returned are nonzero if the character c falls into
** the tested class, and zero if not.
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	return ((ft_isalpha((char)c) || ft_isdigit((char)c)) ? 8 : 0);
}
