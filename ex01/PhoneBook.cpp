#include "PhoneBook.hpp"
#include "contact.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook()
{
	count = 0;
}

void	PhoneBook::add()
{
	if (count == 8)
	{
		std::cout << "Error, already too many contacts" << std::endl;
		return ;
	}
	contacts_tab[count].add();
	count++;
	return ;
}

void	PhoneBook::display()
{
	int	i = 0;

	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (i < count)
	{
		contacts_tab[i].display(i + 1);
		i++;
	}	
}

void	PhoneBook::search()
{
	int	num;
	std::string input;

	if (count == 0)
		return ;
	std::cout << "Select a contact number : ";
	std::getline(std::cin, input);
	if (std::cin.eof() == 1)
		std::exit(0);
	num = stoi(input) - 1;
	if (num >= 0 && num < count)
		contacts_tab[num].display(num + 1);
	else
		std::cout << "Error, number isn't correct !" << std::endl;
}

void	PhoneBook::exit()
{
	std::exit(0);
}