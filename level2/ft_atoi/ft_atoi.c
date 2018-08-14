/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 20:12:07 by jadawson          #+#    #+#             */
/*   Updated: 2018/08/13 20:25:11 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	long long result;
	int n;

	result = 0;
	n = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
		n = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * n);
}

/*
   test main:

   int main()
   {
   printf("%d", ft_atoi("\r-42"));
   return (0);
   }
   */


int ft_atoi(char *str)
{
	long long result; //create two ints, long long result, and int n.
	int n;

	result = 0; //result applies value, n will be 1 for multiplying.
	n = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\r' || *str == '\v' || *str == '\f') //skip all whitespaces
		str++;
	if (*str == '-') //is there a '-'? n becomes -1 to mulitple negative number.
		n = -1;
	if (*str == '-' || *str == '+') //is tehre a - or +? move str up one.
		str++;
	while (*str >= '0' && *str <= '9') //check all numbers from 0 and 9.
	{
		result *= 10; //multiply and apply result by 10
		result += *str - '0'; //'0' changes it from a char to int.
		str++; //move 1 space through string. 
	}
	return (result * n); //multiply result with n which will either be 1 or -1.
}
