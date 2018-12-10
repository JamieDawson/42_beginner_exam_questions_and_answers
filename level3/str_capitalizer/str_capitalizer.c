/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 11:55:21 by jadawson          #+#    #+#             */
/*   Updated: 2018/12/08 12:13:06 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	str_capitalizer(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		ft_putchar(str[i] - 32);
		i++;
	}
	else
	{
		ft_putchar(str[i]);
		i++;
	}
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ')
		{
			ft_putchar(str[i] - 32);
			i++;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && (!(str[i - 1] == ' ')))
		{
			ft_putchar(str[i] + 32);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i = 1;
	
	if (argc <= 1)
		return (0);
	while (i < argc)
	{
		str_capitalizer(argv[i]);
		ft_putchar('\n');
		i++;		
	}
	return (0);
}
