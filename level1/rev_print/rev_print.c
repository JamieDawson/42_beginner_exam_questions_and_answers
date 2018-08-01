/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 15:05:36 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/01 15:11:00 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    rev_print(char *str)
{
    int i;
    i = 0;
    while(str[i])
         i++;  //counts to '\0'
    i--;  //goes back 1 to ignore '\0'
    while (i >= 0)  // i instead of str[i] because of the index, not the number.
    {
        ft_putchar(str[i]);
        i--;
    }
}
int main(int argc, char **argv)
{
    if (argc == 2)  
    rev_print(argv[1]);
    ft_putchar('\n'); 
    return (0);
}
