#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*strtrim(char *s)
{
	while (*s == ' ' || *s == '\t')
		s++;
	return (s);
}

int		is_end(char *s)
{
	while (*s)
	{
		if (*s >= 33 && *s <= 126)
			return (1);
		s++;
	}
	return (0);
}

void	epur_str(char *s)
{
	int found = 0;
	while (*s)
	{
		found = 0;
		if (*s == ' ' || *s == '\t')
			strtrim(s);
		while (*s >= 33 && *s <= 126)
		{
			ft_putchar(*s);
			s++;
			if ((*s != '\0') && (*s == ' ' || *s == '\t'))
				found = 1;
		}
		if (found == 1 && is_end(s) == 1)
		{
			ft_putchar(' ');
			found = 0;
		}
		if (*s != '\0')
			s++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}

/*
Decided to try this out using pointers and created different functions to handle the edges cases.

example outputs:

./a.out "abc" | cat -e
abc$

./a.out "   abc   " | cat -e
abc$

./a.out "   aaa   bbb    ccc    " | cat -e
aaa bbb ccc$

./a.out "     " | cat -e
$
*/
