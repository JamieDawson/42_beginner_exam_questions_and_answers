/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 21:08:56 by jadawson          #+#    #+#             */
/*   Updated: 2019/02/18 21:09:30 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_str_rev(char *str)
{
	char temp;
	int len;
	int n;

	n = 0;
	len = 0;
	while (str[len])
		len++;
	len--;
	while (n < len)
	{
		temp = str[len];
		str[len--] = str[n];
		str[n++] = temp;
	}
	return (str);
}

//TEST MAIN()
/*
int main()
{
  char array[] = "abc";
  ft_str_rev(array);
  printf("%s", array);
  return 0;
}
*/
