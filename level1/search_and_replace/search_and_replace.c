/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 15:19:29 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/01 15:25:29 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_replace(char *dest, char a, char b)
{
	int i;
	i = 0;
	while (dest[i] != '\0')
	{
		if (dest[i] == a)
			ft_putchar(b);
		else
			ft_putchar(dest[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
			ft_replace(argv[1], argv[2][0], argv[3][0]);
	}
	ft_putchar('\n');
	return (0);
}

/*
explained:

1) line 36 sees if there is 4 arguements.   ./a.out arg1 arg2 arg3  (./a.out counts as 1).
2) line 38 confirms if the second and third argument are just a single letter.
3) in ft_replace, if it finds the char represented by 'a', it replaces it with the char represented by 'b'.
4) otherwise, it prints everything else.
*/
