/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 09:29:28 by exam              #+#    #+#             */
/*   Updated: 2018/12/04 09:37:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s2[j])
	{
		while (s1[i] == ' ')
			i++;
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	
	while (s1[i] == ' ')
		i++;
	if (s1[i] == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}
		
int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_hidenp(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
