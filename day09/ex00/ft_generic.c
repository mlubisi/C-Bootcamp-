/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 16:06:23 by mlubisi           #+#    #+#             */
/*   Updated: 2016/04/07 16:09:48 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_generic(void)
{
	write(1, "Tu tu tu tu ; Tu tu tu tu", 25);
}

int	main(void)
{
	ft_generic();
	return (0);
}
