/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 23:36:12 by jadawson          #+#    #+#             */
/*   Updated: 2018/07/31 23:37:50 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int          main()
{
     write(1, "0123456789", 10);
     return (0);
}

/*
explained:
1) write "man write" or "man 2 write" in commannd prompt to learn about write function.
2) 1 for standard output.
3) "0123456789" prints this as a string.
4) 10 is how many bytes you are printing. (count each number in between " ").
