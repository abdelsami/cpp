
#ifndef CAT_HPP
# define CAT_HPP

# include"Aanimal.hpp"
#include"Brain.hpp"

class Cat : public Aanimal
{
private:

	Brain	*CatBrain;

public:

	Cat();
	Cat(const Cat &src);
	~Cat();

	void			makeSound() const;
    Cat             &operator=(const Cat &other);
	Aanimal			&operator=(Aanimal const &rhs);
	Brain			*getBrain() const;
};

#endif