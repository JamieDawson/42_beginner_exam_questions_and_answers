/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:12:07 by jadawson          #+#    #+#             */
/*   Updated: 2019/02/04 13:12:13 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int hold = 0;

	if (len == 0)
		return (0);
	if (len == 1)
		return(tab[0]);

	while (i < len)
	{
		if (tab[i] > hold)
			hold = tab[i];
		i++;
	}
	return (hold);
}
