/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 13:54:57 by jadawson          #+#    #+#             */
/*   Updated: 2019/03/18 13:56:57 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int        main(int ac, char **av)
{
    int        n;
    int        nb;


    if (ac == 2)
    {
        if (av[1][0] == '\0')
        {
            printf("\n");
            return (0);
        }
        nb = atoi(av[1]);
        if (nb == 1)
        {
            printf("1\n");
            return (0);
        }
        while (1)
        {
            n = 1;
            while (++n <= nb)
            {
                if (nb % n == 0)
                {
                    printf("%d", n);
                    nb = nb / n;
                    break ;
                }
            }
            if (nb == 1)
                break ;
            else
                printf("*");
        }
    }
    printf("\n");
    return (0);
}

/*
Example:  ./fprime 42 | cat -e

1) 42 % 2 == 0
	42 / 2 == 21
	print 2

2) 21 % 3 == 0
	21 / 3 == 7
	print 3

3) 7 % 7 == 0;
	print 7

output:  2*3*7$

*/
