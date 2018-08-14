/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 21:55:31 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/13 21:56:46 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int ft_wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[i])
	{
		if (s2[i] && s1[j] && s2[i] == s1[j])
			j++;
		i++;
	}
	if (!s1[j])
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		if(ft_wdmatch(argv[1], argv[2]) == 1)
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
