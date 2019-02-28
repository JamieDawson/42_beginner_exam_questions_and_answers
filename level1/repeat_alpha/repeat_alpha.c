/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 15:01:51 by jadawson          #+#    #+#             */
/*   Updated: 2019/02/27 17:57:13 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *s)
{
	int i = -1;
	int j;
	while (s[++i])
	{
		j = -1;
		if (s[i] >= 'a' && s[i] <= 'z')
			j = s[i] - 'a';
		if (s[i] >= 'A' && s[i] <= 'Z')
			j = s[i] - 'A';
		while (j-- >= 0)
			ft_putchar(s[i]);
		if (!(s[i] >= 'a' && s[i] <= 'z') && (!(s[i] >= 'A' && s[i] <= 'Z')))
			ft_putchar(s[i]);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
