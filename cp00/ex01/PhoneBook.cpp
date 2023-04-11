
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::print_contact(int index)
{
	for (int i = 0; i < index; i++){
		std::cout << "|"
		<<std::setfill(' ') << std::setw(10) << i + 1
		<< "|"
		<<std::setfill(' ') << std::setw(10) << trim_len(contacts[i].get_f_name())
		<< "|"
		<<std::setfill(' ') << std::setw(10) << trim_len(contacts[i].get_l_name())
		<< "|"
		<<std::setfill(' ') << std::setw(10) << trim_len(contacts[i].get_n_name())
		<< "|" << std::endl;
	}
}

void PhoneBook::add_contact()
{
	std::string	tmp;
	static int			i = 0;
	static int			x = 0;
	

	std::cout << "set first name: ";
	getline(std::cin, tmp);
	while (tmp == ""){
		std::cout << "field cant be empty\n"<< "set first name: ";
		getline(std::cin, tmp);
	}
	contacts[i].set_f_name(tmp);
	std::cout << "set last name: ";
	getline(std::cin, tmp);
	while (tmp == ""){
		std::cout << "field cant be empty\n"<< "set last name: ";
		getline(std::cin, tmp);
	}
	contacts[i].set_l_name(tmp);
	std::cout << "set nickname: ";
	getline(std::cin, tmp);
	while (tmp == ""){
		std::cout << "field cant be empty\n"<< "set nickname: ";
		getline(std::cin, tmp);
	}
	contacts[i].set_n_name(tmp);
	std::cout << "set phone number: ";
	getline(std::cin, tmp);
	while (tmp == ""){
		std::cout << "field cant be empty\n"<< "set phone number: ";
		getline(std::cin, tmp);
	}
	while (is_valid(tmp)){
		std::cout << "phone number: ";
		getline(std::cin, tmp);
	}
	contacts[i].set_n_phone(tmp);
	std::cout << "and darkest secret: ";
	getline(std::cin, tmp);
	while (tmp == ""){
		std::cout << "field cant be empty\n"<< "and darkest secret: ";
		getline(std::cin, tmp);
	}
	contacts[i].set_d_secret(tmp);
	std::cout <<"|****DONE****|\n\n";
	i++;
	if (x == 0)
		this->index++;
	if (i == 8)
	{
		i = 0;
		x = 1;
	}
	std::cout << i;
}

void	PhoneBook::print_one(int one)
{
	std::cout << "first_name: " << contacts[one].get_f_name() << std::endl;
	std::cout << "last_name: " << contacts[one].get_l_name() << std::endl;
	std::cout << "nickname: " << contacts[one].get_n_name() << std::endl;
	std::cout << "phone_number: " << contacts[one].get_n_phone() << std::endl;
	std::cout << "darkest_secret: " << contacts[one].get_d_secret() << std::endl;
}

void	PhoneBook::search_contact()
{
	Contact		contact;
	std::string	tmp;
	int			num;
	int n;
	

	if (this->index == 0)
    	std::cout << "empty contact" << std::endl;
	else
	{
		print_head();
		print_contact(this->index);
		std::cout << "enter a number" << std::endl;
		getline(std::cin, tmp);
		n = tmp.length();
		char char_array[n + 1];
		strcpy(char_array, tmp.c_str());
		num = atoi(char_array);
		if (num - 1 >= 0 && num - 1 < this->index)
			print_one(num -1);
		else
			std::cout << "contact doesn't exist" << std::endl;
	}
	return ;
}
