/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 09:32:46 by jadawson          #+#    #+#             */
/*   Updated: 2019/02/06 09:32:47 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	data_user(void *stuff){


	((t_list*)stuff)->data = "hello"; //cast stuff, get data from it.
}


void    ft_list_foreach(t_list *begin_list, void (*f)(void *)) //functon pointer as param
{
	t_list *temp;
	temp = begin_list;

	while (temp)
	{
		printf("%s, %p\n", temp->data, temp);
		f(temp);
		temp = temp->next;
	}
}


int		main()  //Delete this main() for the actual exam. Just for testing purpsoes.
{
	t_list	*a;
	t_list	*b;
	t_list  *c;
	t_list	*temp;

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	c = malloc(sizeof(t_list));

	a->next = b;
	b->next = c;
	c->next = NULL;

	a->data = NULL;
	b->data = NULL;
	c->data = NULL;
	temp = a;

	while(temp)
	{
		printf("%s, %p\n", temp->data, temp);		temp = temp->next;

	}
	printf("             \n");
	ft_list_foreach(a, data_user);

	temp = a;
	printf("        \n");
	while(temp)
	{
		printf("%s, %p\n", temp->data, temp);
		temp = temp->next;
	}

	return (0);
}