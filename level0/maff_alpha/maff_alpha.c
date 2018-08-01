/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 23:30:42 by jadawson          #+#    #+#             */
/*   Updated: 2018/07/31 23:32:18 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main()
{
     write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
     return (0);
}

/*
explained:
1) type "man write" or "man 2 write" to understand write function.
2) 1 for standard output
3) "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n" = 27.  26 letters + 1 \n (new line).
