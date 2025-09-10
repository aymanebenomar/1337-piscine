/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybenoma <aybenoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:00:21 by aybenoma          #+#    #+#             */
/*   Updated: 2025/07/17 14:53:15 by aybenoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	s;

	s = 'z';
	while (s >= 'a')
	{
		write(1, &s, 1);
		s--;
	}
}