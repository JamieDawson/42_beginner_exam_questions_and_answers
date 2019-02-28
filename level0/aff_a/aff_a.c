/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:34:18 by jadawson          #+#    #+#             */
/*   Updated: 2019/02/27 17:34:25 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		aff_a(char *s)
{
	int i = -1;

	while (s[++i])
		if (s[i] == 'a')
			return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		aff_a(argv[1]) == 1 ? write(1, "a\n", 2) : write(1, "\n", 1);
		return (0);
	}
	write(1, "a\n", 2);
	return (0);
}
