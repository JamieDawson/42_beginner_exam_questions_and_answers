/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:28:21 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/01 14:34:51 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void     ft_putstr(char *str)
{
     int i;
     i = 0;
     while(str[i] != '\0')
     {
          ft_putchar(str[i]);
          i++;
     }
}

/*
explained:
1) void because it's not returning anything, just displaying text on the command prompt.
2) while str is not equal to null.
3) send a single char to the ft_putchar function.
4) write prints out each char that gets passed to it (search "man write" or "man 2 write" in the command prompt.
5) i++ goes through the string til we get to null.
*/
