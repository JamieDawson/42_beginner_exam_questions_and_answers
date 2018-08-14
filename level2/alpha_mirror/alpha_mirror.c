/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 21:51:32 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/13 21:53:57 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    alpha_mirror(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            ft_putchar('m' - (str[i] - 'n')); //ascii values of 'm' and 'n'
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            ft_putchar('M' - (str[i] - 'N')); //ascii values of 'M' and 'N'
        }
        else
            ft_putchar(str[i]);
        i++;
    }
}

int        main(int argc, char **argv)
{
    if (argc == 2)
		alpha_mirror(argv[1]);
	ft_putchar('\n');
    return (0);
}
