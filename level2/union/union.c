/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 21:05:01 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/13 21:44:54 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_union(char *str1, char *str2)
{
	char tab[128] = { 0 }; //128 is ascii "limit". { 0 }Sets everything to 0.
	int    i;

	i = 0;
	while (str1[i])
	{
		if (tab[str1[i]] == 0) //not in table yet.
		{
			tab[str1[i]] = 1;  //put in table.
			write (1, &str1[i], 1);  //only prints char once.
		}
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (tab[str2[i]] == 0)
		{
			tab[str2[i]] = 1;
			write(1, &str2[i], 1);
		}
		i++;
	}
}

int    main (int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
