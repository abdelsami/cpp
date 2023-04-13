
#ifndef CAT_HPP
# define CAT_HPP

# include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal
{
private:

	Brain	*CatBrain;

public:

	Cat();
	Cat(const Cat &src);
	virtual ~Cat();

	void			makeSound() const;
    Cat             &operator=(const Cat &other);
	Animal			&operator=(Animal const &rhs);
	Brain			*getBrain() const;
};

#endif