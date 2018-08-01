/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:55:16 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/01 14:57:09 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

/*
test main():

int   main()
{
	char name[10] = "hello";
	printf("%d", ft_strlen(name));
}

explained:
1) Takes in a string.
2) i counts each individual char being read in the string.
3) returning the number of i.
4) if you pass in "hello", it returns the number 5.
*/
