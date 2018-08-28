/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 15:01:51 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/27 22:25:22 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	repeat_alpha (char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				j = str[i] - 65;
			else if (str[i] >= 'a' && str[i] <= 'z')
				j = str[i] - 97;
			while (j >= 0)
			{
				ft_putchar (str[i]);
				j--;
			}
		}
		if (!(str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			ft_putchar(str[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha (argv[1]);
	ft_putchar ('\n');
	return (0);
}
