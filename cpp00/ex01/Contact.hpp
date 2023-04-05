

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>
#include<string>
#include <iomanip>

class Contact{
    private:
        std::string	f_name;
        std::string	l_name;
        std::string	n_name;
        std::string	n_phone;
        std::string	d_secret;
    public:
        Contact();
        ~Contact();
        void		set_f_name(std::string first_name);
        void		set_l_name(std::string first_name);
        void		set_n_name(std::string nickname);
        void		set_n_phone(std::string phonenumber);
        void		set_d_secret(std::string darkest_secret);
        std::string	get_f_name();
        std::string	get_l_name();
        std::string	get_n_name();
        std::string	get_n_phone();
        std::string	get_d_secret();
};

#endif