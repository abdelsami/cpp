

#include "PhoneBook.hpp"

int main ()
{
	PhoneBook	phonebook;
	std::string	line;

	guidelines();
	getline(std::cin, line);
	while (line != "EXIT")
	{
		if (line == "ADD")
			phonebook.add_contact();
		else if (line == "SEARCH")
			phonebook.search_contact();
		else
			std::cout << "Invalid commande\n";
		std::cout << "Enter a commande\n";
		getline(std::cin, line);
	}
	return (0);
}
