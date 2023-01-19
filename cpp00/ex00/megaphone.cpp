#include <iostream>

int	main(int nb, char **argv)
{
	int		i;
	size_t	j;

	if (nb == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (i = 1; i < nb; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
			std::cout << (char)std::toupper(argv[i][j]);
		if (i < nb - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}
