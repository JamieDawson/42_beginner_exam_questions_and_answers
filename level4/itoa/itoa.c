/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 19:26:47 by jadawson          #+#    #+#             */
/*   Updated: 2019/02/16 20:29:22 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> // DELETE

int		numlen(int num)
{
	int tot = 0;

	if (num == 0)
		return (1);
	
	if (num < 0)
		tot++;

	while (num != 0)
	{
		num = num / 10;
		tot++;
	}
	return (tot);
}

char	*ft_itoa(int nbr)
{
	int size = numlen(nbr);
	int neg = 1;
	char *hold = (char*)malloc(sizeof(char) * (size + 1));

	hold[size] = '\0';

	if (nbr < 0)
	{
		hold[0] = '-';
		neg = -1;
	}

	if (nbr == 0)
		hold[0] = '0';

	while(nbr != 0)
	{
		hold[size - 1] = neg * (nbr % 10) + '0';
		nbr = nbr / 10;
		size--;
	}
	return (hold);
}

int	main(int argc, char **av)
{
	(void)argc;
	numlen(atoi(av[1]));
	printf("%s\n", ft_itoa(atoi(av[1])));	
	return (0);
}
