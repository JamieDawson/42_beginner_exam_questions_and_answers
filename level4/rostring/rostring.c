/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 10:22:03 by jadawson          #+#    #+#             */
/*   Updated: 2019/03/18 13:46:50 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rostring(char *str)
{
	int i = 0; 
	int b = 0;
	int e = 0;
	int q = 0;
	int flag = 0;
	int	print_space = 0;
	int a_word_found = 0;
	int second_word_found = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] >= 33 && str[i] <= 126)
	{
		b = i;
		a_word_found = 1;
	}
	while (str[i] >= 33 && str[i] <= 126)
		i++;
	e = i - 1;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] >= 33 && str[i] <= 126)
		second_word_found = 1;

	if (second_word_found == 1)
	{
		while (str[i]) 
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			while (str[i] >= 33 && str[i] <= 126)
			{
				flag = 1;
				ft_putchar(str[i]);
				i++;
			}
			
			if (flag == 1)
			{
				q = i;
				while (str[q] == ' ' || str[q] == '\t')
					q++;
				if (str[q] >= 33 && str[q] <= 126)
					print_space = 1;
				if (print_space == 1)
					ft_putchar(' ');			
				print_space = 0;	
			}
			if (str[i] != '\0')
				i++;
		}
	}

	if (second_word_found == 1)
		ft_putchar(' ');
	
	if (a_word_found == 1)
	{
		while (b <= e)
		{
			ft_putchar(str[b]);
			b++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
		ft_rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}
