#include <iostream>
#include <string>
#include "contact.hpp"
#include "PhoneBook.hpp"

int		main()
{
	PhoneBook	PhoneBook;
	std::string buff;
	while (1)
	{
		std::cout << "ADD, SEARCH or EXIT ? : ";
		std::cin >> buff;
		if (!buff.compare("ADD"))
			PhoneBook.add();
		else if (!buff.compare("SEARCH"))
		{
			PhoneBook.display();
			PhoneBook.search();
		}
		else if (!buff.compare("EXIT"))
		{
			PhoneBook.exit();
		}
	}
}