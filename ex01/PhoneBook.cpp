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
		std::cout << "Error, already too many contacts";
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
		contacts_tab[i].display();
		i++;
	}	
}

void	PhoneBook::search()
{
	int	num;
	std::string input;
	std::cout << "Select a contact number :";
	std::getline(std::cin, input);
	num = stoi(input);
	if (num > 0 && num < count + 1)
		contacts_tab[num].display();
}

void	PhoneBook::exit()
{
	std::exit(0);
}