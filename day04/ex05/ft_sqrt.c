/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 17:07:41 by mlubisi           #+#    #+#             */
/*   Updated: 2016/04/05 17:07:43 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned	int i;

	i = nb;

	while (nb < (i * i))
		i--;
	if (nb = (i * i))
		return (i);
	if (nb > (i * i))
		return (0);
}
