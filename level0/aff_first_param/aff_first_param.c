/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 23:08:01 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/06 15:33:59 by jadawson         ###   ########.fr       */
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
        ft_putchar(str[i]);
        i++;
    }
}

int        main(int argc, char **argv)
{
    if (argc > 1)
        ft_putstr(argv[1]);
    ft_putchar('\n');
    return (0);
}

/*
Explained:
1) int argc, char **argv  allow the program to accept arguments.
	example:   ./a.out firstarg secondarg

2) Both of these count differently when being used in the code.
argc starts counting at 1 and argv count

        ./a.out   firstarg  secondarg
argc:      1          2         3
argv:      0          1         2


By understanding how these two count, you can use them to pass arguments to functions.
*/
