/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 23:17:11 by jadawson          #+#    #+#             */
/*   Updated: 2018/07/31 23:24:01 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1, "z\n", 2);
	return (0);
}

/*
1) write a program that takes a string. The int argc, char **argv in main() does that.
2) voiding argc and argv because we are not using them.
3) use the write function because no matter what we input, it just prints z and a new line.
4) type "man write" or "man 2 write" to study how the write function works.
