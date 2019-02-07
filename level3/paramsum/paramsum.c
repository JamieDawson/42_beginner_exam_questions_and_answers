/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 14:37:33 by jadawson          #+#    #+#             */
/*   Updated: 2019/02/07 14:42:17 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnum(int num)
{
	if (num / 10)
	{
		ft_putnum (num / 10);
		ft_putnum (num % 10);
	}
	else
		ft_putchar(num + '0');
}

int        main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (argc > 1)
	{
		ft_putnum(argc - 1);
		ft_putchar('\n');
		return (0);
	}
	return (0);
}


/*
HOW IT WORKS:

Setting argv to void since we are not using it. If you type "gcc -Wall -Wextra -Werror paramsum.c", you'll see the error pop up telling you you're not using the variable.

pass in arguemnts example:   a./out test1 test2 test3
argc counts 1 2 3 4 5
argv counts 0 1 2 3 4

By subtracting 1 from argc, you get the number of arguements.
*/
