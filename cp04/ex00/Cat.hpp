
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

public:

	Cat();
	Cat(const Cat &src);
	~Cat();

	void			makeSound() const;
    Cat             &operator=(const Cat &other);
};

#endif