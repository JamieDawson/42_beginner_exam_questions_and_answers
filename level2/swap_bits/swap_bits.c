/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 21:05:46 by jadawson          #+#    #+#             */
/*   Updated: 2019/02/18 21:05:53 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char swap_bits(unsigned char octet)
{
     return ((octet >> 4) | (octet << 4));
}

