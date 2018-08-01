/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 23:28:15 by jadawson          #+#    #+#             */
/*   Updated: 2018/07/31 23:29:53 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int main()
{
  write (1, "Hello World\n", 12);
  return(0);
}

/*
explained:
1) type "man write" or "man 2 write" to understand write function.
2) 1 for standard output.
3) "Hello world" for string and "\n" for new line.
4) 12 for "Hello World"(11) and "\n"(1)" added together.
