/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:11:41 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/22 10:07:41 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb){
	if (nb <= 5){
		nb = nb + 1;
		ft_iterative_factorial(nb);
		return(0);
	}
	else{
		return(0);
	}
}