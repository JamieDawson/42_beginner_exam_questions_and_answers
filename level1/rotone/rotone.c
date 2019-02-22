/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 15:15:30 by jadawson          #+#    #+#             */
/*   Updated: 2019/02/21 18:28:06 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	  rotone(char *str)
{
	int i = -1;

	while (str[++i])
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			ft_putchar(str[i] + 1);
		else if (str[i] == 'z' || str[i] == 'Z')
			ft_putchar(str[i] - 25);
		else
			ft_putchar(str[i]);
	}
}
int     main(int argc, char **argv)
{
    if(argc == 2)
        rotone(argv[1]);
    ft_putchar('\n');
    return 0;
}

/*
explained:
1) find every letter from a - y and A - Y. Move them 1 letter up.
2) find z and Z and subtract them 25 letters down.
*/
