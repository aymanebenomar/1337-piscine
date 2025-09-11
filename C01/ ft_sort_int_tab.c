/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybenoma <aybenoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:28:16 by aybenoma          #+#    #+#             */
/*   Updated: 2025/07/20 13:43:46 by aybenoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
	int		first;
	int		second;

	first = 0;
	while (first < size -1)
	{
		second = first + 1;
		while (second < size)
		{
			if (tab[first] > tab[second])
			{
				int 	swap;
				
				swap = tab[first];
				tab[first] = tab[second];
				tab[second] = swap;
			}
			second++;
		}
		first++;
	}
}