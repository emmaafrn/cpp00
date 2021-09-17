#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
private:
	contact	contacts_tab[8];
public:
	void	add(PhoneBook *PhoneBook);
	void	display();
	void	search();
	void	exit();
};

#endif