/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzima <lzima@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:07:15 by lzima             #+#    #+#             */
/*   Updated: 2021/11/03 02:29:18 by lzima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* RTFM */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}
