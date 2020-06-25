/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:11:14 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/25 11:28:43 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return nb*ft_recursive_factorial(nb - 1);
	else
		return 1;
	return 0;
}
