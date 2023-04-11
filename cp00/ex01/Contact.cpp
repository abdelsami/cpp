
#include "PhoneBook.hpp"
Contact::Contact()
{
}

Contact::~Contact()
{
}
void		Contact::set_f_name(std::string f_name)
{
	this->f_name = f_name;
	return ;
}

std::string	Contact::get_f_name()
{
	return (this->f_name);
}

void		Contact::set_l_name(std::string l_name)
{
	this->l_name = l_name;
	return ;
}

std::string	Contact::get_l_name()
{
	return (this->l_name);
}

void		Contact::set_n_name(std::string n_name)
{
	this->n_name = n_name;
	return ;
}

std::string	Contact::get_n_name()
{
	return (this->n_name);
}

void		Contact::set_n_phone(std::string p_number)
{
	this->n_phone = p_number;
	return ;
}

std::string	Contact::get_n_phone()
{
	return (this->n_phone);
}

void		Contact::set_d_secret(std::string d_secret)
{
	this->d_secret = d_secret;
	return ;
}

std::string	Contact::get_d_secret()
{
	return (this->d_secret);
}
