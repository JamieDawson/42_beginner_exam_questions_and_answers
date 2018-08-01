/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 15:15:30 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/01 15:18:09 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_putchar(char *c)
{
	write(1, &c, 1);
}
char    rotone(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] < 'z' || str[i] >= 'A' && str[i] < 'Z')
			ft_putchar(str[i] + 1);
		else if(str[i] == 'z' || str[i] == 'Z')
			ft_putchar(str[i] - 25);
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar("\n");
	return (*str);
}
int     main(int argc, char **argv)
{
	if(argc == 2)
		rotone(argv[1]);
	else
		ft_putchar("\n");
	return 0;
}

/*
explained:
1) find every letter from a - y and A - Y. Move them 1 letter up.
2) find z and Z and subtract them 25 letters down.
*/
