/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:56:19 by mlitvino          #+#    #+#             */
/*   Updated: 2024/10/31 17:27:26 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return (1);
	else if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}