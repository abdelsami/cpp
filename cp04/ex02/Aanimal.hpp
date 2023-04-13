
#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include<iostream>
#include"Brain.hpp"

class Aanimal
{
protected:

    std::string type;

public:

    virtual ~Aanimal();

    virtual Aanimal      &operator=(const Aanimal &other) = 0;
    const std::string   &getType() const;
    virtual void	    makeSound() const = 0;
	virtual Brain       *getBrain() const = 0;
};

#endif