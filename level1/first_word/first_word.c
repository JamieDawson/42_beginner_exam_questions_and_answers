/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:22:27 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/01 14:26:28 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char first_word(char *str)
{
	int i;
	i = 0;
	while(str[i] == '\t' || str[i] == '\f' || str[i] == '\v' || 
			str[i] == '\r' || str[i] == '\n' || str[i] == ' ')
		i++;
	while(str[i] >= 33 && str[i] <= 126)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int        main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_first_word(av[1]);
		return (0);
	}
	else
		ft_putchar("\n");
	return (0);
}

/*
explained:
1) There should only be one argument. So check if ac is equal to 2.
2) Pass the first argument to the function.
3) skip all spaces. \t \f \v \r \n and ' '
4) 33 and 126 are ascii values. Search "man ascii" in the command prompt.
*/

