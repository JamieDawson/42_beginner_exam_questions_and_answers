/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 23:10:13 by jadawson          #+#    #+#             */
/*   Updated: 2018/07/31 23:16:22 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc > 1)
		ft_putstr(argv[argc - 1]);
	ft_putchar('\n');
	return (0);
}

/*
 Steps:
1) check if argc is greater than 1. Meaning it has an arguement.
2) use counter (argc) and subtract 1 to find last arguement.
3) There will always be a new line, so just add ft_putchar('\n');
4) Lastly, just use the basic ft_putstr + ft_putchar combo.
*/

