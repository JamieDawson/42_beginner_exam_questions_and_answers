/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 20:26:12 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/13 20:33:49 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup( char *src)
{
	char *result;
	int i;

	i = 0;
	while (src[i])
		i++;
	result = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while(src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
int main()
{
	char strA[10]= "A string";
	printf("%s", ft_strdup(strA)); //should print out the text "A String"
	return (0);
}
*/
