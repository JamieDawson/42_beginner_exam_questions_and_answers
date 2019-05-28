/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 19:26:41 by jadawson          #+#    #+#             */
/*   Updated: 2019/05/27 20:47:28 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int		brackets(char *str)
{
	int		len = ft_strlen(str);
	int 	hold[len];
	int		i = 0;
	int		count = 0;

	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			hold[count] = str[i];
			count++;
		}

		if (str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			if (str[i] == ')')
			{
				if (hold[count - 1] != '(')
					return (-1);
				if (hold[count - 1] == '(')
					count--;
			}
			if (str[i] == ']')
			{
				if (hold[count - 1] != '[')
					return (-1);
				if (hold[count - 1] == '[')
					count--;
			}
			if (str[i] == '}')
			{
				if (hold[count - 1] != '{')
					return (-1);
				if (hold[count - 1] == '{')
					count--;
			}
		}
		if (str[i] != '\0')
			i++;
	}
	if (count != 0)
		return (-1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (i < argc)
	{
		if (brackets(argv[i]) == -1)
			write(1, "Error\n", 6);
		else
			write(1, "OK\n", 3);
		i++;
	}
	return (0);
}

/*
1) create an array the size of the string provided.
2) check if (, [, or {	
	if any of the 3, add them to the new array.
3) check if ), ], }
	check array for matching (, [, {.
		if not matching
			return -1 so program prints "Error\n"
		if matching
			move array counter back 1 so it's looking at previous symbol.
*/
