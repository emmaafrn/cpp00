#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class contact {
private :
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;
public :
	void		add();
	void		display();
	std::string	to_print(std::string str);
};


#endif