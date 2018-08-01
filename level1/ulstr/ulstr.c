/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 15:26:17 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/01 15:29:13 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int ft_ulstr(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(str[i] - 32);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar(str[i] + 32);
		else
			ft_putchar(str[i]);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}

/*
explained:

1) type "man ascii" in command prompt to see ascii values.
2) the ascii value 32 is how you find the uppercase or lowercase value of a letter.
3) 65(A) + 32 = 97(a).

*/
