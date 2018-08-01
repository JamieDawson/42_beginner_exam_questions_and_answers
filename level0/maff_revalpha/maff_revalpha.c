/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 23:33:44 by jadawson          #+#    #+#             */
/*   Updated: 2018/07/31 23:35:36 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main()
{
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
	return (0);
}

/*
explained:
1) type "man write" or "man 2 write" to learn about write function.
2) 1 is standard output
3) "zYxWvUtSrQpOnMlKjIhGfEdCbA\n" makes 27 bytes, 26 letters in the alphabet and  the \n which makes a newline.
