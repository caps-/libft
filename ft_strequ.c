/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 04:12:48 by pwhittin          #+#    #+#             */
/*   Updated: 2022/10/08 04:12:52 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/* An implimentation of the strequ() function from the string.h library.
 *
 * This guy checks to see if two strings are identical, or equal. It returns 1
 * if the strings are the same and 0 if they aren't. It's sort of like the
 * oppsite of strcmp() in that instead of returning the difference it just
 * returns 0 when they do differ.*/

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}
