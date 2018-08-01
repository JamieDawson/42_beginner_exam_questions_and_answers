/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:35:46 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/01 14:54:03 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
	char *result;

	result = dest;
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}


/*
test main():

int main()
{
  char strA[10];
  char strB[10]= "A string";
  ft_strcpy(strA, strB);
}

explained:
1) The pointers (*) are pointing to the strings passed to it.
2) The result holds on the the value of dest.
*/
