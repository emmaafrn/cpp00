#include "contact.hpp"

contact::contact()
{}

void	contact::add()
{
	std::cout << "First name : ";
	std::getline (std::cin, firstname);
	if (std::cin.eof() == 1)
		std::exit(0);
	std::cout << "Last name : ";
	std::getline(std::cin, lastname);
	if (std::cin.eof() == 1)
		std::exit(0);
	std::cout << "Nick name : ";
	std::getline(std::cin, nickname);
	if (std::cin.eof() == 1)
		std::exit(0);
	std::cout << "Phone number : ";
	std::getline(std::cin, phonenumber);
	if (std::cin.eof() == 1)
		std::exit(0);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, darkestsecret);
	if (std::cin.eof() == 1)
		std::exit(0);
}

std::string	contact::to_print(std::string str)
{
	int			i = 0;
	std::string	tmp;
	int 		length = str.length();

	if (length > 10)
	{
		tmp = str.substr(0, 9);
		tmp.insert(9, ".");
	}
	else
	{
		while (i < 10 - length)
		{
			tmp.insert(i, " ");
			i++;
		}
		tmp.insert(i, str);
	}
	return (tmp);
}

void	contact::display(int index)
{
	std::cout << "|         " << index << "|" << to_print(firstname) << "|" << to_print(lastname) << "|" << to_print(nickname) << "|" << std::endl;
}
