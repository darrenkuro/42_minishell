/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:08:56 by dlu               #+#    #+#             */
/*   Updated: 2023/07/06 04:28:48 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strarrlen(char **arr)
{
	int	i;

	if (!arr)
		return (0);
	i = -1;
	while (arr[++i])
		;
	return (i);
}