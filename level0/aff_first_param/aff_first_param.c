/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 23:08:01 by jadawson          #+#    #+#             */
/*   Updated: 2018/07/31 23:08:33 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void     ft_putchar(char c)
{
     write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int        i;
    i = 0;
    while (str[i])
    {
        write(str[i]);
        i++;
    }
}

int        main(int argc, char **argv)
{
    if (argc > 1)
        ft_putstr(argv[1]);
    write(1, "\n", 1);
    return (0);
}
