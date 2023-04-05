

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include"Contact.hpp"

class PhoneBook
{
	private:
    	Contact contacts[8];
    	int      index;
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact();
		void	search_contact();
		void	print_contact(int);
		void	print_one(int);
};

int			is_valid(std::string str);
std::string	trim_len(std::string str);
void		print_head();
void		guidelines();
#endif