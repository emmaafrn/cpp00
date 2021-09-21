#include "PhoneBook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
}

void	PhoneBook::add()
{
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

	std::cout << "Select a contact number :";
	std::cin >> num;
	if (num < count)
		contacts_tab[num].display();
}

void	PhoneBook::exit()
{
	exit();
}