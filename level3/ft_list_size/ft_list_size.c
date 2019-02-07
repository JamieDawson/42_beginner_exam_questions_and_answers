/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 14:24:12 by jadawson          #+#    #+#             */
/*   Updated: 2019/02/07 14:24:14 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int    ft_list_size(t_list *begin_list)
{
	t_list *stuff = begin_list;
	int i = 0;

	if (!begin_list)
		return(i);

	while (stuff)
	{
		i++;
		stuff = stuff->next;
	}
	return (i);
}


int		main()
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));

	a->data = NULL;
	b->data = NULL;
	c->data = NULL;

	a->next = b;
	b->next = c;
	c->next = NULL;

	printf("%i\n", ft_list_size(a));
	return (0);
}