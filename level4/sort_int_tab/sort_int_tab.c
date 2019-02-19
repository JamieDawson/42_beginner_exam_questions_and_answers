/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 21:17:20 by jadawson          #+#    #+#             */
/*   Updated: 2019/02/18 21:17:53 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    sort_int_tab(int *tab, unsigned int size)
{
	unsigned int    a;
	int                tmp;

	a = 1;
	if (size != 0)
	{
		while (a < size)
		{
			if (tab[a] < tab[a - 1])
			{
				tmp = tab[a];
				tab[a] = tab[a - 1];
				tab[a - 1] = tmp;
				a = 0;
			}
			++a;
		}
	}
}

/*
int        main()
{
    int tab[4] = {4, 1, 3, 9};
    int size = 4;
    int i = 0;
    while (i < size)
        printf("[%d]\n", tab[i++]);
    sort_int_tab(tab, size);
    i = 0;
    printf("**************\n");
    while (i < size)
        printf("[%d]\n", tab[i++]);
    return (0);
}

OUTPUT:
[4]
[1]
[3]
[9]
**************
[1]
[3]
[4]
[9]
*/
