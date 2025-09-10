/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybenoma <aybenoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:43:21 by aybenoma          #+#    #+#             */
/*   Updated: 2025/07/17 14:53:36 by aybenoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_numbers(void){

	int		number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}