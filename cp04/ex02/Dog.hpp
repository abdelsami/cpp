
#ifndef DOG_HPP
# define DOG_HPP

# include"Aanimal.hpp"
#include"Brain.hpp"

class Dog : public Aanimal
{
private:

	Brain	*DogBrain;

public:

	Dog();
	Dog(const Dog &src);
	~Dog();

	void			makeSound() const ;
    Dog             &operator=(const Dog &other);
	Aanimal			&operator=(Aanimal const &rhs);
	Brain			*getBrain() const;
};

#endif