/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_array_xor.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelnov <dtelnov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:02:32 by dtelnov           #+#    #+#             */
/*   Updated: 2022/11/29 19:02:35 by dtelnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*swap_array(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = strlen(str) - 1;
	while (i < j)
	{
		s[i] ^= s[j];
		s[j] ^= s[i];
		s[i] ^= s[j];
		i++;
		j--;
	}
	return (str);
}
