/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbolat <bbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:05:52 by bbolat            #+#    #+#             */
/*   Updated: 2022/02/05 14:24:04 by bbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int str)
{
	return (str >= 32 && str <= 127);
}
