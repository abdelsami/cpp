
#ifndef DOG_HPP
# define DOG_HPP

# include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal
{
private:

	Brain	*DogBrain;

public:

	Dog();
	Dog(const Dog &src);
	virtual ~Dog();

	void			makeSound() const ;
    Dog             &operator=(const Dog &other);
	Animal			&operator=(Animal const &rhs);
	Brain			*getBrain() const;
};

#endif