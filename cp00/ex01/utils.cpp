
#include "PhoneBook.hpp"

int	is_valid(std::string str)
{
	for(std::string::size_type i = 0; i < str.size(); ++i) {
    	if (!isdigit(str[i])){
			std::cout << "Invalid phone number" << std::endl;
			return (1);
		}
	}
	return (0);
}

std::string	trim_len(std::string str)
{
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		return (str);
}

void	print_head()
{
	std::cout << "|"
		<<std::setfill(' ') << std::setw(10) << "index"
		<< "|"
		<<std::setfill(' ') << std::setw(10) << "first_name"
		<< "|"
		<<std::setfill(' ') << std::setw(10) << "last_name"
		<< "|"
		<<std::setfill(' ') << std::setw(10) << "nickname"
		<< "|" << std::endl;
}

void	guidelines()
{
    std::cout << std::endl;
    std::cout << "📞 Welcome to Your Awesome PhoneBook 📖" << std::endl;
    std::cout << std::endl;
    std::cout << "--------------USAGE---------------" << std::endl;
    std::cout << "ADD\t: To add a contact." << std::endl;
    std::cout << "SEARCH\t: To search for a contact." << std::endl;
    std::cout << "EXIT\t: to quite the PhoneBook." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
}