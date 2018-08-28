/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 15:11:56 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/27 22:35:12 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'M' || str[i] >= 'a' && str[i] <= 'm')
			ft_putchar(str[i] + 13);
		else if (str[i] >= 'N' && str[i] <= 'Z' || str[i] >= 'n' && str[i] <= 'z')
			ft_putchar(str[i] - 13);
		else
			ft_putchar(str[i]);
		i++;
     }
}

int		main(int argc, char **argv)
{
	if (argc == 2)
     	rot_13(argv[1]);
	ft_putchar('\n');
	return (0);
}

/*
explained:
1) The alphabet is 26 characters. 26 / 2 = 13.
2) Find the first and 13th letter in the alphabet. Then increase that letter by 13.
3) find the 14th and 26ths letter in the alphabet, then decrease those by 13.
4) print everything else.
*/
