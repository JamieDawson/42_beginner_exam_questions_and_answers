#include <unistd.h>

char    aff_a(char *str1)
{
	int i;
	i = 0;
	while(str1[i])
	{
		if(str1[i] == 'a')
		{
			write(1, "a", 1);  
			return 0;
		}
		i++;
	}
	return 0;
}

int     main(int argc, char **argv)
{
	if (argc == 2)
	{
		aff_a(argv[1]);
	}
	else
		write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
