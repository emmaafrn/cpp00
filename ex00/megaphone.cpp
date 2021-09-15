#include <iostream>
#include <ctype.h>
#include <string>

int	main(int argc, char **argv){
	
	int	j;
	int	i;
	std::string str;

	j = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	while (j < argc)
	{
		i = 0;
		str = argv[j];
		while (str[i])
		{
			std::cout << (char)toupper((int)str[i]);
			i++;
		}
		j++;
	}
	return (0);
}