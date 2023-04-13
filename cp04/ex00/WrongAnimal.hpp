
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:

	std::string type;

public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	~WrongAnimal();

	WrongAnimal	        &operator=(const WrongAnimal &other);
	void	            makeSound() const;
	const std::string	&getType() const;

};

#endif