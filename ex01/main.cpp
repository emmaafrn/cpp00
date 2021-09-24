#include "contact.hpp"
#include "PhoneBook.hpp"

int		main()
{
	PhoneBook	PhoneBook;
	std::string buff;

	while (1)
	{
		std::cout << "ADD, SEARCH or EXIT ? : ";
		std::getline(std::cin, buff);
		if (std::cin.eof() == 1)
			break ;
		if (!buff.compare("ADD"))
			PhoneBook.add();
		else if (!buff.compare("SEARCH"))
		{
			try{
			PhoneBook.display();
			PhoneBook.search();
			}
			catch(std::exception &e)
			{
				std::cout << "Error, not a valid digit !" << std::endl;
			}
		}
		else if (!buff.compare("EXIT"))
		{
			PhoneBook.exit();
		}
	}
}