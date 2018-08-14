/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 20:57:46 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/13 21:02:40 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void     ft_putchar(char c)
{
     write(1, &c, 1);
}

void    last_word(char *str)
{
    int j;
    int i;
    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
            j = i + 1;
        i++;
    }
    while (str[j] >= 33 && str[j] <= 126)
    {
       ft_putchar(str[j]);
        j++;
    }
}

int        main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
    ft_putchar('\n');
    return (0);
}
