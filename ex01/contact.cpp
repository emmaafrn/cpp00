#include "contact.hpp"

void	contact::add()
{
	std::cout << "First name : ";
	std::cin >> firstname;
	std::cout << "Last name : ";
	std::cin >> lastname;
	std::cout << "Nick name : ";
	std::cin >> nickname;
	std::cout << "Phone number : ";
	std::cin >> phonenumber;
	std::cout << "Darkest secret : ";
	std::cin >> darkestsecret;
}

std::string	contact::to_print(std::string str)
{
	int			i = 0;
	std::string	tmp;
	int 		length = str.length();

	if (length > 10)
	{
		tmp = str.substr(0, 9);
		tmp.insert(8, ".");
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

void	contact::display()
{
	std::cout << "|         " << &index << "|" << to_print(firstname) << "|" << to_print(lastname) << "|" << to_print(nickname) << "|" << std::endl;
}