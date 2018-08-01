/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 15:01:51 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/01 15:04:57 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

char    ft_repeat_alpha(char *str)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')  //finds uppercase letters.
		{
			j = str[i] - 65; //65 is an ascii value of 'A'
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')   //finds lowercase letters
		{
			j = str[i] - 97; //97 is the ascii value of 'a'
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else   //finds non letter characters
		{
			ft_putchar(str[i]);
		}
		i++;   //makes sure i is increasing inside while loop.
	}
	ft_putchar('\n'); //creates newline when loop is done.
}

int        main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
