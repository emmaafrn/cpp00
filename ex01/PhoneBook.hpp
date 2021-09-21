#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
private:
	contact	contacts_tab[8];
	int		count;
public:
		PhoneBook();
	void	add();
	void	display();
	void	search();
	void	exit();
};

#endif