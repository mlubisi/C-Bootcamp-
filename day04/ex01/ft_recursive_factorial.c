/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 17:04:00 by mlubisi           #+#    #+#             */
/*   Updated: 2016/04/05 17:04:24 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return(0);
	if(nb == 0 || nb == 1)
		return(1);
		return (nb * ft_recursive_factorial(nb - 1));
}
