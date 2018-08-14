/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 20:34:34 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/13 20:45:11 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int        ft_check(char *str, char c, int i) //confirms if letter has been used already.
{
    int    j;
    j = 0;
    while(j < i)
    {
        if (str[j] == c)
            return (0);
        j++;
    }
    return (1);
}

void    ft_inter(char *s1, char *s2)
{
    int    i;
    int    j;
    i = 0;
    while (s1[i])
    {
        if (ft_check(s1, s1[i], i) == 1) 
        {
            j = 0;
            while (s2[j])
            {
                if (s2[j] == s1[i])
                {
                    ft_putchar(s1[i]);
                    break;
                }
                j++;
            }
        }
        i++;
    }
}

int        main(int ac, char **av)
{
    if (ac == 3)
        ft_inter(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}

