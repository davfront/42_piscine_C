/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:51:33 by dapereir          #+#    #+#             */
/*   Updated: 2022/07/08 12:02:32 by dapereir         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		x;

	i = 0;
	while (i < size / 2)
	{
		x = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = x;
		i++;
	}
}
