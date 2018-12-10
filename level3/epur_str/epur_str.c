/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 12:25:55 by jadawson          #+#    #+#             */
/*   Updated: 2018/12/07 12:37:09 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i = 0;
	int flag = 0;

	if (argc == 2)
	{
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ')
				flag = 1;
			if (argv[1][i] != ' ')
			{
				if (flag == 1)
				{
					ft_putchar(' ');
					flag = 0;
				}
				ft_putchar(argv[1][i]);
			}
			i++;
		}
	}
}
